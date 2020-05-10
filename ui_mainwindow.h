/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionTutorial;
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *filePathEdit;
    QPushButton *getPathButton;
    QVBoxLayout *verticalLayout;
    QFrame *line_3;
    QTableView *sourceFileList;
    QFrame *line;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *needDate;
    QSpacerItem *horizontalSpacer;
    QCheckBox *needTime;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *needNumber_2;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *needOriginalFileName;
    QLineEdit *OriginFileNameEdit;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *needFirstCustomText;
    QLineEdit *FirstCustomTextEdit;
    QCheckBox *needSecondCustomText;
    QLineEdit *secondCustomTextEdit;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLabel *exampleFileName;
    QPushButton *reNameFileButton;
    QTableView *resultFileList;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setAutoFillBackground(true);
        MainWindow->setStyleSheet(QString::fromUtf8("backround = rgb(255,255,255)"));
        actionTutorial = new QAction(MainWindow);
        actionTutorial->setObjectName(QString::fromUtf8("actionTutorial"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 781, 581));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        filePathEdit = new QLineEdit(layoutWidget);
        filePathEdit->setObjectName(QString::fromUtf8("filePathEdit"));
        filePathEdit->setReadOnly(true);

        horizontalLayout->addWidget(filePathEdit);

        getPathButton = new QPushButton(layoutWidget);
        getPathButton->setObjectName(QString::fromUtf8("getPathButton"));

        horizontalLayout->addWidget(getPathButton);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        line_3 = new QFrame(layoutWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);

        sourceFileList = new QTableView(layoutWidget);
        sourceFileList->setObjectName(QString::fromUtf8("sourceFileList"));

        verticalLayout->addWidget(sourceFileList);

        line = new QFrame(layoutWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        needDate = new QCheckBox(layoutWidget);
        needDate->setObjectName(QString::fromUtf8("needDate"));

        horizontalLayout_2->addWidget(needDate);

        horizontalSpacer = new QSpacerItem(70, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        needTime = new QCheckBox(layoutWidget);
        needTime->setObjectName(QString::fromUtf8("needTime"));

        horizontalLayout_2->addWidget(needTime);

        horizontalSpacer_2 = new QSpacerItem(70, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        needNumber_2 = new QCheckBox(layoutWidget);
        needNumber_2->setObjectName(QString::fromUtf8("needNumber_2"));

        horizontalLayout_2->addWidget(needNumber_2);

        horizontalSpacer_3 = new QSpacerItem(60, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        needOriginalFileName = new QCheckBox(layoutWidget);
        needOriginalFileName->setObjectName(QString::fromUtf8("needOriginalFileName"));

        horizontalLayout_2->addWidget(needOriginalFileName);

        OriginFileNameEdit = new QLineEdit(layoutWidget);
        OriginFileNameEdit->setObjectName(QString::fromUtf8("OriginFileNameEdit"));
        OriginFileNameEdit->setReadOnly(true);

        horizontalLayout_2->addWidget(OriginFileNameEdit);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        needFirstCustomText = new QCheckBox(layoutWidget);
        needFirstCustomText->setObjectName(QString::fromUtf8("needFirstCustomText"));

        horizontalLayout_3->addWidget(needFirstCustomText);

        FirstCustomTextEdit = new QLineEdit(layoutWidget);
        FirstCustomTextEdit->setObjectName(QString::fromUtf8("FirstCustomTextEdit"));

        horizontalLayout_3->addWidget(FirstCustomTextEdit);

        needSecondCustomText = new QCheckBox(layoutWidget);
        needSecondCustomText->setObjectName(QString::fromUtf8("needSecondCustomText"));

        horizontalLayout_3->addWidget(needSecondCustomText);

        secondCustomTextEdit = new QLineEdit(layoutWidget);
        secondCustomTextEdit->setObjectName(QString::fromUtf8("secondCustomTextEdit"));

        horizontalLayout_3->addWidget(secondCustomTextEdit);


        verticalLayout_2->addLayout(horizontalLayout_3);

        line_2 = new QFrame(layoutWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        exampleFileName = new QLabel(layoutWidget);
        exampleFileName->setObjectName(QString::fromUtf8("exampleFileName"));

        horizontalLayout_4->addWidget(exampleFileName);

        horizontalLayout_4->setStretch(1, 8);

        verticalLayout_2->addLayout(horizontalLayout_4);

        reNameFileButton = new QPushButton(layoutWidget);
        reNameFileButton->setObjectName(QString::fromUtf8("reNameFileButton"));
        reNameFileButton->setSizeIncrement(QSize(0, 10));

        verticalLayout_2->addWidget(reNameFileButton);

        resultFileList = new QTableView(layoutWidget);
        resultFileList->setObjectName(QString::fromUtf8("resultFileList"));

        verticalLayout_2->addWidget(resultFileList);

        MainWindow->setCentralWidget(centralwidget);
        QWidget::setTabOrder(getPathButton, sourceFileList);
        QWidget::setTabOrder(sourceFileList, needDate);
        QWidget::setTabOrder(needDate, needTime);
        QWidget::setTabOrder(needTime, needNumber_2);
        QWidget::setTabOrder(needNumber_2, needOriginalFileName);
        QWidget::setTabOrder(needOriginalFileName, needFirstCustomText);
        QWidget::setTabOrder(needFirstCustomText, needSecondCustomText);
        QWidget::setTabOrder(needSecondCustomText, reNameFileButton);
        QWidget::setTabOrder(reNameFileButton, resultFileList);
        QWidget::setTabOrder(resultFileList, OriginFileNameEdit);
        QWidget::setTabOrder(OriginFileNameEdit, FirstCustomTextEdit);
        QWidget::setTabOrder(FirstCustomTextEdit, secondCustomTextEdit);
        QWidget::setTabOrder(secondCustomTextEdit, filePathEdit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\346\211\271\351\207\217\351\207\215\345\221\275\345\220\215\346\226\207\344\273\266", nullptr));
        actionTutorial->setText(QCoreApplication::translate("MainWindow", "Tutorial", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\350\267\257\345\276\204\357\274\232", nullptr));
        getPathButton->setText(QCoreApplication::translate("MainWindow", "\346\265\217\350\247\210", nullptr));
        needDate->setText(QCoreApplication::translate("MainWindow", "\345\275\223\345\211\215\346\227\245\346\234\237", nullptr));
        needTime->setText(QCoreApplication::translate("MainWindow", "\345\275\223\345\211\215\346\227\266\351\227\264", nullptr));
        needNumber_2->setText(QCoreApplication::translate("MainWindow", "\350\207\252\345\212\250\345\272\217\345\217\267", nullptr));
        needOriginalFileName->setText(QCoreApplication::translate("MainWindow", "\345\216\237\346\226\207\344\273\266\345\220\215", nullptr));
        needFirstCustomText->setText(QCoreApplication::translate("MainWindow", "\350\207\252\345\256\232\344\271\211\345\255\227\347\254\246\344\270\2621", nullptr));
        needSecondCustomText->setText(QCoreApplication::translate("MainWindow", "\350\207\252\345\256\232\344\271\211\345\255\227\347\254\246\344\270\2622", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\347\244\272\344\276\213\346\226\207\346\234\254\357\274\232", nullptr));
        exampleFileName->setText(QString());
        reNameFileButton->setText(QCoreApplication::translate("MainWindow", "Do It!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
