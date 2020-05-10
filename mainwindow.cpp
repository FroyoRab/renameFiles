#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qstyle.h>
#include <qstylefactory.h>
#include <QMessageBox>
#include <qfiledialog.h>
#include <QTableView>
#include <QStandardItemModel>
#include <windows.h>
#include <QAbstractItemView>
#include <QDir>
#include <QDateTime>
#include <QDebug>
#include <QModelIndexList>
#include <QInputDialog>
#include <QProcess>

QString gFilepath = "";

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //窗口风格设置
    QApplication::setStyle(QStyleFactory::create("Fusion"));               // 更改风格
    QApplication::setPalette(QApplication::style()->standardPalette());     // 使用风格默认的颜色

    //创建model并且附加至table
    temp_model =new QStandardItemModel();
    temp_model->setColumnCount(3);
    temp_model->setHeaderData(0,Qt::Horizontal,"文件名");
    temp_model->setHeaderData(1,Qt::Horizontal,"尾缀名");
    temp_model->setHeaderData(2,Qt::Horizontal,"最后修改时间");
    ui->sourceFileList->setModel(temp_model);
    ui->sourceFileList->setColumnWidth(0,200);
    ui->sourceFileList->setColumnWidth(1,100);
    ui->sourceFileList->setColumnWidth(2,450);
    ui->sourceFileList->setSelectionBehavior(QAbstractItemView::SelectRows);

    result_model = new QStandardItemModel();
    result_model->setColumnCount(2);
    result_model->setHeaderData(0,Qt::Horizontal,"原文件名");
    result_model->setHeaderData(1,Qt::Horizontal,"现文件名");
    ui->resultFileList->setModel(result_model);
    ui->resultFileList->setColumnWidth(0,350);
    ui->resultFileList->setColumnWidth(1,410);
    ui->resultFileList->setSelectionBehavior(QAbstractItemView::SelectRows);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_getPathButton_clicked()
{
    //浏览按钮和文本框同步
    temp_model->removeRows(0,temp_model->rowCount());
    gFilepath = QFileDialog::getExistingDirectory();
    ui->filePathEdit->setText(gFilepath);
    listFileNow(gFilepath);
}

void MainWindow::listFileNow(QString dir)
{
    //创建dir对象
    QDir fileDir(dir);
    fileDir.setFilter(QDir::Files);
    fileDir.refresh();//刷新dir对象
    for (QString &a : fileDir.entryList()){
        int rowCount = temp_model->rowCount();
        //文件名
        QStringList allFileName = a.split(".");
        //如果没有尾缀名，加入空
        if(allFileName.length()==1)allFileName.append(" ");
        temp_model->setItem(rowCount,1,new QStandardItem(allFileName[allFileName.length()-1]));
        allFileName.pop_back();
        temp_model->setItem(rowCount,0,new QStandardItem(allFileName.join(".")));
        //文件信息
        QFileInfo fileInfo(dir+'/'+a);
        QDateTime time =  fileInfo.metadataChangeTime();
        QString timeStr;
        timeStr.sprintf("%04d-%02d-%02d %02d:%02d:%02d",
                        time.date().year(),
                        time.date().month(),
                        time.date().day(),
                        time.time().hour(),
                        time.time().minute(),
                        time.time().second());
        temp_model->setItem(rowCount,2,new QStandardItem(timeStr));
        ui->sourceFileList->setRowHeight(rowCount,8);
    }

    //设置默认选中
    if(temp_model->rowCount()!=0)
        ui->sourceFileList->selectRow(0);

}

void MainWindow::on_needDate_clicked(bool checked)
{
    if(checked){
        QDateTime dateTime;
        dateTime = dateTime.currentDateTime();

        QString temp;
        temp.sprintf("%04d-%02d-%02d",
                      dateTime.date().year(),
                      dateTime.date().month(),
                      dateTime.date().day());

        fileNameList.push_back(temp);
        memberTable.append("date");
    }
    else{
        //在成员表中查找date位置
        int memberin = memberTable.indexOf("date");
        //删除名称表中位置
        fileNameList.erase(fileNameList.begin()+memberin);
        //删除成员表中位置
        memberTable.erase(memberTable.begin()+memberin);
    }
    int select = ui->sourceFileList->currentIndex().row();
    ui->exampleFileName->setText(getNewFileName(select));
    serialNumber=0;
}

void MainWindow::on_needTime_clicked(bool checked)
{
    if(checked){
        QDateTime dateTime;
        dateTime = dateTime.currentDateTime();

        QString temp;
        temp.sprintf("%02d:%02d",
                      dateTime.time().hour(),
                      dateTime.time().minute());

        fileNameList.push_back(temp);
        memberTable.append("time");
    }
    else{
        //查找成员表中位置
        int memberin = memberTable.indexOf("time");
        fileNameList.erase(fileNameList.begin()+memberin);
        memberTable.erase(memberTable.begin()+memberin);
    }
    int select  = ui->sourceFileList->currentIndex().row();
    ui->exampleFileName->setText(getNewFileName(select));
    serialNumber=0;
}

QString MainWindow::getNewFileName(int selectOne)
{
    int numberInList=-1;
    int nameInList=-1;
    if(didHaveOriginFileName){
        //fileNameList[filenameInList]=temp_model->item(selectOne)->text();
         nameInList = memberTable.indexOf("originFileName");
        //fileNameList[memberin]=temp_model->item(selectOne)->text();
    }
    if(didHaveNumber){
         numberInList = memberTable.indexOf("number");
    }


    QStringList tempStrList;
    for (int var = 0; var < memberTable.length(); ++var) {
        if(var>0){
            tempStrList.append("_");
        }
        if(var==numberInList){
            QString temp;
            temp.sprintf("%d",serialNumber);
            tempStrList.append(temp);
            serialNumber++;
        }
        else if(var==nameInList){
            QModelIndex index = temp_model->index(selectOne,0);
            tempStrList.append(temp_model->data(index).toString());
        }
        else{
            tempStrList.append(fileNameList[var]);
        }
    }
      QModelIndex index = temp_model->index(selectOne,1);
      tempStrList.append("."+temp_model->data(index).toString());
    return tempStrList.join("");
}

void MainWindow::on_needNumber_2_clicked(bool checked)
{
    if(checked){
        didHaveNumber=true;
        memberTable.append("number");
        fileNameList.push_back(" ");
    }else{
        didHaveNumber=false;
        int memberin = memberTable.indexOf("number");
        fileNameList.erase(fileNameList.begin()+memberin);
        memberTable.erase(memberTable.begin()+memberin);
    }
    int select =  ui->sourceFileList->currentIndex().row();
    ui->exampleFileName->setText(getNewFileName(select));
    serialNumber=0;
}

void MainWindow::on_needOriginalFileName_clicked(bool checked)
{
    if(ui->filePathEdit->text().isEmpty()){
        if(QMessageBox::warning(NULL, "warning", "请先选择需要重命名的文件夹", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes))
            on_getPathButton_clicked();
        ui->needOriginalFileName->setChecked(false);
        return;
    }
    if(checked){
        didHaveOriginFileName=true;
        memberTable.append("originFileName");
        fileNameList.push_back(" ");
    }else{
        didHaveOriginFileName=false;
        int memberin = memberTable.indexOf("originFileName");
        fileNameList.erase(fileNameList.begin()+memberin);
        memberTable.erase(memberTable.begin()+memberin);
    }
    int select  = ui->sourceFileList->currentIndex().row();
    QModelIndex index = temp_model->index(select,0);
    ui->OriginFileNameEdit->setText(temp_model->data(index).toString());
    ui->exampleFileName->setText(getNewFileName(select));
    serialNumber=0;
}

void MainWindow::on_needFirstCustomText_clicked(bool checked)
{
    QString str1;
    if(ui->FirstCustomTextEdit->text().isEmpty()){
        str1 = QInputDialog::getText(NULL,"请输入自定义字符串","自定义字符串：");
    }
    if(checked){
        ui->FirstCustomTextEdit->setText(str1);
        fileNameList.push_back(str1);
        memberTable.append("customStr1");
    }else{
        int memberin = memberTable.indexOf("customStr1");
        memberTable.erase(memberTable.begin()+memberin);
        fileNameList.erase(fileNameList.begin()+memberin);
    }
    int select = ui->sourceFileList->currentIndex().row();
    ui->exampleFileName->setText(getNewFileName(select));
    serialNumber=0;
}

void MainWindow::on_needSecondCustomText_clicked(bool checked)
{
    QString str2;
    if(ui->secondCustomTextEdit->text().isEmpty()){
        str2 = QInputDialog::getText(NULL,"请输入自定义字符串","自定义字符串：");
    }
    if(checked){
        ui->secondCustomTextEdit->setText(str2);
        fileNameList.push_back(str2);
        memberTable.append("customStr2");
    }else{
        int memberin = memberTable.indexOf("customStr2");
        memberTable.erase(memberTable.begin()+memberin);
        fileNameList.erase(fileNameList.begin()+memberin);
    }
    int select = ui->sourceFileList->currentIndex().row();
    ui->exampleFileName->setText(getNewFileName(select));
    serialNumber=0;
}

void MainWindow::on_reNameFileButton_clicked()
{
    result_model->removeRows(0,result_model->rowCount());
    QModelIndexList index = ui->sourceFileList->selectionModel()->selectedRows(0);
    QStringList strList ;
    for (QModelIndex var : index) {
        strList.append(temp_model->data(var).toString());
    }
    QModelIndexList index2 = ui->sourceFileList->selectionModel()->selectedRows(1);
    QStringList str2List;
    for(QModelIndex var:index2){
        str2List.append(temp_model->data(var).toString());
    }
    int selectStart = ui->sourceFileList->currentIndex().row();
    QDir qdir = QDir(gFilepath);
    for(int var = 0;var<strList.length();var++){
        int rowCount = result_model->rowCount();
        QString origin_file_name = strList[var]+"."+str2List[var];
        QString new_file_name = getNewFileName(index.at(var).row());
        result_model->setItem(rowCount,0,new QStandardItem(origin_file_name));
        result_model->setItem(rowCount,1,new QStandardItem(new_file_name));
        qdir.rename(origin_file_name,new_file_name);
        selectStart--;
    }
    QMessageBox::information(this,"完成","重命名完成！",QMessageBox::Ok,QMessageBox::NoButton);
    QProcess::execute("explorer "+gFilepath.replace("/","\\"));
    serialNumber=0;
}
