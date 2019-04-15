/********************************************************************************
** Form generated from reading UI file 'TestApplication.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTAPPLICATION_H
#define UI_TESTAPPLICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestApplicationClass
{
public:
    QFrame *mainFrame;
    QToolButton *closeAppBtn;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QTextEdit *testProgramText;
    QTextEdit *updatesText;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *installedVersionText;
    QTextEdit *latestVersionText;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QTextEdit *newVersionText;
    QPushButton *updateBtn;

    void setupUi(QDialog *TestApplicationClass)
    {
        if (TestApplicationClass->objectName().isEmpty())
            TestApplicationClass->setObjectName(QStringLiteral("TestApplicationClass"));
        TestApplicationClass->resize(510, 400);
        TestApplicationClass->setStyleSheet(QLatin1String("#TestApplicationrClass {\n"
"background: grey;\n"
"}\n"
"\n"
"#mainFrame {\n"
"width: 441px;\n"
"height: 328px;\n"
"border-radius: 7px;\n"
"box-shadow: 0 0 9px rgba(0,0,0,0.19);\n"
"background-color: #ffffff;\n"
"border: 1px solid #e7e7e7;\n"
"}"));
        mainFrame = new QFrame(TestApplicationClass);
        mainFrame->setObjectName(QStringLiteral("mainFrame"));
        mainFrame->setGeometry(QRect(30, 30, 441, 328));
        mainFrame->setFrameShape(QFrame::StyledPanel);
        mainFrame->setFrameShadow(QFrame::Raised);
        closeAppBtn = new QToolButton(mainFrame);
        closeAppBtn->setObjectName(QStringLiteral("closeAppBtn"));
        closeAppBtn->setGeometry(QRect(383, -15, 75, 75));
        closeAppBtn->setStyleSheet(QLatin1String("#closeAppBtn {\n"
"background-color: rgba(255, 255, 255, 0);\n"
"}"));
        QIcon icon;
        icon.addFile(QStringLiteral("Resources/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeAppBtn->setIcon(icon);
        closeAppBtn->setIconSize(QSize(75, 75));
        closeAppBtn->setCheckable(false);
        closeAppBtn->setPopupMode(QToolButton::DelayedPopup);
        closeAppBtn->setToolButtonStyle(Qt::ToolButtonIconOnly);
        closeAppBtn->setAutoRaise(true);
        gridLayoutWidget = new QWidget(mainFrame);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(24, 10, 401, 141));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setHorizontalSpacing(2);
        gridLayout->setVerticalSpacing(3);
        gridLayout->setContentsMargins(6, 0, 0, 0);
        testProgramText = new QTextEdit(gridLayoutWidget);
        testProgramText->setObjectName(QStringLiteral("testProgramText"));
        testProgramText->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(testProgramText->sizePolicy().hasHeightForWidth());
        testProgramText->setSizePolicy(sizePolicy);
        testProgramText->setMaximumSize(QSize(300, 40));
        testProgramText->setFocusPolicy(Qt::NoFocus);
        testProgramText->setLayoutDirection(Qt::LeftToRight);
        testProgramText->setStyleSheet(QLatin1String("#testProgramText {\n"
"font-size: 29px;\n"
"line-height: 30px;\n"
"color: #2567c0;\n"
"border: white;\n"
"}"));
        testProgramText->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        testProgramText->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        testProgramText->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        testProgramText->setReadOnly(true);
        testProgramText->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(testProgramText, 0, 0, 1, 1, Qt::AlignHCenter|Qt::AlignTop);

        updatesText = new QTextEdit(gridLayoutWidget);
        updatesText->setObjectName(QStringLiteral("updatesText"));
        updatesText->setMaximumSize(QSize(170, 40));
        updatesText->setLayoutDirection(Qt::RightToLeft);
        updatesText->setStyleSheet(QLatin1String("#updatesText {\n"
"font-size: 18px;\n"
"line-height: 30px;\n"
"color: #2975dc;\n"
"text-align: right;\n"
"border: white;\n"
"}"));
        updatesText->setReadOnly(true);

        gridLayout->addWidget(updatesText, 2, 1, 1, 1, Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetNoConstraint);
        installedVersionText = new QTextEdit(gridLayoutWidget);
        installedVersionText->setObjectName(QStringLiteral("installedVersionText"));
        installedVersionText->setMaximumSize(QSize(16777215, 35));
        installedVersionText->setStyleSheet(QLatin1String("#installedVersionText {\n"
"font-size: 18px;\n"
"line-height: 30px;\n"
"color: #000000;\n"
"font-family: \"Arial\";\n"
"text-align: center;\n"
"border: white;\n"
"}"));
        installedVersionText->setReadOnly(true);

        verticalLayout_3->addWidget(installedVersionText, 0, Qt::AlignTop);

        latestVersionText = new QTextEdit(gridLayoutWidget);
        latestVersionText->setObjectName(QStringLiteral("latestVersionText"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(latestVersionText->sizePolicy().hasHeightForWidth());
        latestVersionText->setSizePolicy(sizePolicy1);
        latestVersionText->setMinimumSize(QSize(0, 35));
        latestVersionText->setMaximumSize(QSize(16777215, 35));
        latestVersionText->setStyleSheet(QLatin1String("#latestVersionText {\n"
"font-size: 18px;\n"
"line-height: 30px;\n"
"color: #000000;\n"
"font-family: \"Arial\";\n"
"text-align: center;\n"
"border: white;\n"
"}"));
        latestVersionText->setReadOnly(true);

        verticalLayout_3->addWidget(latestVersionText, 0, Qt::AlignTop);


        gridLayout->addLayout(verticalLayout_3, 2, 0, 1, 1);

        layoutWidget = new QWidget(mainFrame);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 230, 391, 73));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        newVersionText = new QTextEdit(layoutWidget);
        newVersionText->setObjectName(QStringLiteral("newVersionText"));
        newVersionText->setMaximumSize(QSize(16777215, 30));
        newVersionText->setStyleSheet(QLatin1String("#newVersionText {\n"
"font-size: 18px;\n"
"line-height: 30px;\n"
"color: #c44512;\n"
"border: white;\n"
"}"));
        newVersionText->setReadOnly(true);

        horizontalLayout->addWidget(newVersionText, 0, Qt::AlignLeft|Qt::AlignVCenter);

        updateBtn = new QPushButton(layoutWidget);
        updateBtn->setObjectName(QStringLiteral("updateBtn"));
        updateBtn->setStyleSheet(QLatin1String("#updateBtn {\n"
"font-size: 18px;\n"
"line-height: 30px;\n"
"color: #ffffff;\n"
"font-family: \"Arial\";\n"
"width: 157px;\n"
"height: 52px;\n"
"border-radius: 6px;\n"
"background-color: #2567c0;\n"
"}"));

        horizontalLayout->addWidget(updateBtn);

        layoutWidget->raise();
        gridLayoutWidget->raise();
        closeAppBtn->raise();

        retranslateUi(TestApplicationClass);
        QObject::connect(closeAppBtn, SIGNAL(clicked()), TestApplicationClass, SLOT(close()));

        QMetaObject::connectSlotsByName(TestApplicationClass);
    } // setupUi

    void retranslateUi(QDialog *TestApplicationClass)
    {
        TestApplicationClass->setWindowTitle(QApplication::translate("TestApplicationClass", "TestApplication", 0));
#ifndef QT_NO_TOOLTIP
        closeAppBtn->setToolTip(QApplication::translate("TestApplicationClass", "Close", 0));
#endif // QT_NO_TOOLTIP
        closeAppBtn->setText(QString());
        testProgramText->setHtml(QApplication::translate("TestApplicationClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:29px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:29px;\">Test Program</span></p></body></html>", 0));
        updatesText->setHtml(QApplication::translate("TestApplicationClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:18px; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:12pt;\">Check for updates</span></p></body></html>", 0));
        installedVersionText->setHtml(QApplication::translate("TestApplicationClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:18px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">Installed version: </span></p></body></html>", 0));
        latestVersionText->setHtml(QApplication::translate("TestApplicationClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:18px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt;\">Latest version: </span></p></body></html>", 0));
        newVersionText->setHtml(QApplication::translate("TestApplicationClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:18px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:12pt;\">New version available!</span></p></body></html>", 0));
        updateBtn->setText(QApplication::translate("TestApplicationClass", "Update now", 0));
    } // retranslateUi

};

namespace Ui {
    class TestApplicationClass: public Ui_TestApplicationClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTAPPLICATION_H
