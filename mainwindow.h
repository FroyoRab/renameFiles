#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>
using std::vector;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class QStandardItemModel;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_getPathButton_clicked();

    void on_needDate_clicked(bool checked);

    void on_needTime_clicked(bool checked);

    QString getNewFileName(int selectOne);

    void listFileNow(QString dir);
    void on_needNumber_2_clicked(bool checked);

    void on_needOriginalFileName_clicked(bool checked);

    void on_needFirstCustomText_clicked(bool checked);

    void on_needSecondCustomText_clicked(bool checked);

    void on_reNameFileButton_clicked();

private:
    Ui::MainWindow *ui;
    QStandardItemModel* temp_model;
    QStandardItemModel* result_model;
    //内容表
    vector<QString> fileNameList;
    //成员表
    QStringList memberTable;
    //序号记录
    int serialNumber=0;
    //是否需要源文件名
    bool didHaveOriginFileName=false;
    //是否需要序号
    bool didHaveNumber=false;

};
#endif // MAINWINDOW_H
