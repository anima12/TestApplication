/********************************************************************************
** Form generated from reading UI file 'TestInstaller.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTINSTALLER_H
#define UI_TESTINSTALLER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestInstallerClass
{
public:
    QFrame *mainFrame;
    QToolButton *closeBtn;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QTextEdit *thanksText;
    QTextEdit *testProgramText;
    QTextEdit *installText;
    QPushButton *optionsBtn;
    QPushButton *installBtn;

    void setupUi(QDialog *TestInstallerClass)
    {
        if (TestInstallerClass->objectName().isEmpty())
            TestInstallerClass->setObjectName(QStringLiteral("TestInstallerClass"));
        TestInstallerClass->resize(510, 400);
        TestInstallerClass->setStyleSheet(QLatin1String("#TestInstallerClass {\n"
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
        mainFrame = new QFrame(TestInstallerClass);
        mainFrame->setObjectName(QStringLiteral("mainFrame"));
        mainFrame->setGeometry(QRect(30, 30, 441, 328));
        mainFrame->setFrameShape(QFrame::StyledPanel);
        mainFrame->setFrameShadow(QFrame::Raised);
        closeBtn = new QToolButton(mainFrame);
        closeBtn->setObjectName(QStringLiteral("closeBtn"));
        closeBtn->setGeometry(QRect(383, -15, 75, 75));
        closeBtn->setStyleSheet(QLatin1String("#closeBtn {\n"
"background-color: rgba(255, 255, 255, 0);\n"
"}"));
        QIcon icon;
        icon.addFile(QStringLiteral("Resources/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeBtn->setIcon(icon);
        closeBtn->setIconSize(QSize(75, 75));
        closeBtn->setCheckable(false);
        closeBtn->setPopupMode(QToolButton::DelayedPopup);
        closeBtn->setToolButtonStyle(Qt::ToolButtonIconOnly);
        closeBtn->setAutoRaise(true);
        gridLayoutWidget = new QWidget(mainFrame);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 60, 411, 131));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setVerticalSpacing(3);
        gridLayout->setContentsMargins(6, 0, 0, 0);
        thanksText = new QTextEdit(gridLayoutWidget);
        thanksText->setObjectName(QStringLiteral("thanksText"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(thanksText->sizePolicy().hasHeightForWidth());
        thanksText->setSizePolicy(sizePolicy);
        thanksText->setMaximumSize(QSize(350, 35));
        thanksText->setFocusPolicy(Qt::NoFocus);
        thanksText->setLayoutDirection(Qt::LeftToRight);
        thanksText->setStyleSheet(QLatin1String("#thanksText {\n"
"font-size: 18px;\n"
"line-height: 30px;\n"
"color: #000000;\n"
"font-family: \"Arial\";\n"
"text-align: center;\n"
"border: white;\n"
"}"));
        thanksText->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        thanksText->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        thanksText->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        thanksText->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(thanksText, 1, 0, 1, 1);

        testProgramText = new QTextEdit(gridLayoutWidget);
        testProgramText->setObjectName(QStringLiteral("testProgramText"));
        testProgramText->setEnabled(true);
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

        installText = new QTextEdit(gridLayoutWidget);
        installText->setObjectName(QStringLiteral("installText"));
        installText->setMaximumSize(QSize(350, 40));
        installText->setStyleSheet(QLatin1String("#installText {\n"
"font-size: 20px;\n"
"line-height: 30px;\n"
"color: #000000;\n"
"font-family: \"Arial\";\n"
"text-align: center;\n"
"border: white;\n"
"}"));
        installText->setReadOnly(true);

        gridLayout->addWidget(installText, 3, 0, 1, 1);

        optionsBtn = new QPushButton(mainFrame);
        optionsBtn->setObjectName(QStringLiteral("optionsBtn"));
        optionsBtn->setGeometry(QRect(19, 243, 125, 52));
        optionsBtn->setStyleSheet(QLatin1String("#optionsBtn {\n"
"border-radius: 6px;\n"
"background-color: #ffffff;\n"
"border: 1px solid #cccccc;\n"
"padding: 3px;\n"
"padding-left: 5px;\n"
"padding-right: 5px;\n"
"font-size: 18px;\n"
"line-height: 30px;\n"
"color: #424242;\n"
"font-family: \"Arial\";\n"
"width: 125px;\n"
"height: 52px;\n"
"}\n"
"\n"
""));
        installBtn = new QPushButton(mainFrame);
        installBtn->setObjectName(QStringLiteral("installBtn"));
        installBtn->setGeometry(QRect(298, 243, 125, 52));
        installBtn->setStyleSheet(QLatin1String("#installBtn {\n"
"width: 125px;\n"
"height: 52px;\n"
"border-radius: 6px;\n"
"background-color: #2567c0;\n"
"padding: 3px;\n"
"padding-left: 5px;\n"
"padding-right: 5px;\n"
"font-size: 18px;\n"
"line-height: 30px;\n"
"color: #ffffff;\n"
"font-family: \"Arial\";\n"
"}"));

        retranslateUi(TestInstallerClass);
        QObject::connect(optionsBtn, SIGNAL(clicked()), TestInstallerClass, SLOT(optionsBtnClicked()));
        QObject::connect(closeBtn, SIGNAL(clicked()), TestInstallerClass, SLOT(close()));

        QMetaObject::connectSlotsByName(TestInstallerClass);
    } // setupUi

    void retranslateUi(QDialog *TestInstallerClass)
    {
        TestInstallerClass->setWindowTitle(QApplication::translate("TestInstallerClass", "TestInstaller", 0));
#ifndef QT_NO_TOOLTIP
        closeBtn->setToolTip(QApplication::translate("TestInstallerClass", "Close", 0));
#endif // QT_NO_TOOLTIP
        closeBtn->setText(QString());
        thanksText->setHtml(QApplication::translate("TestInstallerClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:18px; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18px;\">Thank you for choosing Bugrr!</span></p></body></html>", 0));
        testProgramText->setHtml(QApplication::translate("TestInstallerClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:29px; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:29px;\">Test Program</span></p></body></html>", 0));
        installText->setHtml(QApplication::translate("TestInstallerClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:20px; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:9pt;\">Click &quot;Install&quot; to begin</span></p></body></html>", 0));
        optionsBtn->setText(QApplication::translate("TestInstallerClass", "Options", 0));
        installBtn->setText(QApplication::translate("TestInstallerClass", "Install", 0));
    } // retranslateUi

};

namespace Ui {
    class TestInstallerClass: public Ui_TestInstallerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTINSTALLER_H
