/********************************************************************************
** Form generated from reading UI file 'OptionsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONSDIALOG_H
#define UI_OPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OptionsDialog
{
public:
    QFrame *mainFrame;
    QToolButton *closeBtn;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QTextEdit *testProgramText;
    QTextEdit *changeFolderText;
    QHBoxLayout *horizontalLayout;
    QLineEdit *fileEdit;
    QToolButton *browseBtn;
    QPushButton *cancelBtn;
    QPushButton *installBtn;

    void setupUi(QDialog *OptionsDialog)
    {
        if (OptionsDialog->objectName().isEmpty())
            OptionsDialog->setObjectName(QStringLiteral("OptionsDialog"));
        OptionsDialog->resize(510, 400);
        OptionsDialog->setStyleSheet(QLatin1String("#OptionsDialog {\n"
"background: gray;\n"
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
        mainFrame = new QFrame(OptionsDialog);
        mainFrame->setObjectName(QStringLiteral("mainFrame"));
        mainFrame->setGeometry(QRect(30, 20, 441, 328));
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
        gridLayoutWidget->setGeometry(QRect(10, 60, 411, 157));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
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

        changeFolderText = new QTextEdit(gridLayoutWidget);
        changeFolderText->setObjectName(QStringLiteral("changeFolderText"));
        sizePolicy.setHeightForWidth(changeFolderText->sizePolicy().hasHeightForWidth());
        changeFolderText->setSizePolicy(sizePolicy);
        changeFolderText->setMaximumSize(QSize(300, 35));
        changeFolderText->setFocusPolicy(Qt::NoFocus);
        changeFolderText->setLayoutDirection(Qt::LeftToRight);
        changeFolderText->setStyleSheet(QLatin1String("#changeFolderText {\n"
"font-size: 18px;\n"
"line-height: 30px;\n"
"color: #000000;\n"
"font-family: \"Arial\";\n"
"text-align: center;\n"
"border: white;\n"
"}"));
        changeFolderText->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        changeFolderText->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        changeFolderText->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        changeFolderText->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(changeFolderText, 1, 0, 1, 1, Qt::AlignHCenter|Qt::AlignTop);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout->setContentsMargins(30, -1, -1, -1);
        fileEdit = new QLineEdit(gridLayoutWidget);
        fileEdit->setObjectName(QStringLiteral("fileEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(fileEdit->sizePolicy().hasHeightForWidth());
        fileEdit->setSizePolicy(sizePolicy1);
        fileEdit->setMaximumSize(QSize(300, 16777215));
        fileEdit->setStyleSheet(QLatin1String("#fileEdit {\n"
"width: 323px;\n"
"height: 50px;\n"
"border-radius: 2px;\n"
"background-color: #ffffff;\n"
"border: 1px solid #cccccc;\n"
"font-size: 14px;\n"
"line-height: 30px;\n"
"color: #000000;\n"
"font-family: \"Arial\";\n"
"}"));

        horizontalLayout->addWidget(fileEdit, 0, Qt::AlignRight);

        browseBtn = new QToolButton(gridLayoutWidget);
        browseBtn->setObjectName(QStringLiteral("browseBtn"));
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(browseBtn->sizePolicy().hasHeightForWidth());
        browseBtn->setSizePolicy(sizePolicy2);
        browseBtn->setMaximumSize(QSize(33, 29));
        browseBtn->setLayoutDirection(Qt::RightToLeft);
        browseBtn->setStyleSheet(QLatin1String("#browseBtn {\n"
"background-color: rgba(255, 255, 255, 0);\n"
"}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("Resources/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        browseBtn->setIcon(icon1);
        browseBtn->setIconSize(QSize(32, 28));
        browseBtn->setAutoRaise(true);

        horizontalLayout->addWidget(browseBtn, 0, Qt::AlignLeft|Qt::AlignVCenter);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        cancelBtn = new QPushButton(mainFrame);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        cancelBtn->setGeometry(QRect(19, 243, 125, 52));
        cancelBtn->setStyleSheet(QLatin1String("#cancelBtn {\n"
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
        gridLayoutWidget->raise();
        cancelBtn->raise();
        installBtn->raise();
        closeBtn->raise();

        retranslateUi(OptionsDialog);
        QObject::connect(closeBtn, SIGNAL(clicked()), OptionsDialog, SLOT(close()));
        QObject::connect(cancelBtn, SIGNAL(clicked()), OptionsDialog, SLOT(close()));
        QObject::connect(browseBtn, SIGNAL(clicked()), OptionsDialog, SLOT(browseBtnClicked()));

        QMetaObject::connectSlotsByName(OptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *OptionsDialog)
    {
        OptionsDialog->setWindowTitle(QApplication::translate("OptionsDialog", "OptionsDialog", 0));
#ifndef QT_NO_TOOLTIP
        closeBtn->setToolTip(QApplication::translate("OptionsDialog", "Close", 0));
#endif // QT_NO_TOOLTIP
        closeBtn->setText(QString());
        testProgramText->setHtml(QApplication::translate("OptionsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:29px; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Arial'; font-size:29px;\">Test Program</span></p></body></html>", 0));
        changeFolderText->setHtml(QApplication::translate("OptionsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:18px; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18px;\">Change folder</span></p></body></html>", 0));
        fileEdit->setText(QApplication::translate("OptionsDialog", "C:\\Program Files (x86)\\Test\\", 0));
        browseBtn->setText(QApplication::translate("OptionsDialog", "...", 0));
        cancelBtn->setText(QApplication::translate("OptionsDialog", "Cancel", 0));
        installBtn->setText(QApplication::translate("OptionsDialog", "Install", 0));
    } // retranslateUi

};

namespace Ui {
    class OptionsDialog: public Ui_OptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONSDIALOG_H
