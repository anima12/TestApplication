#include "TestInstaller.h"
#include "OptionsDialog.h"

TestInstaller::TestInstaller(QWidget *parent)
	: QDialog(parent, Qt::FramelessWindowHint)
{
	ui.setupUi(this);
	setAttribute(Qt::WA_TranslucentBackground, true);
}

void TestInstaller::optionsBtnClicked()
{
	OptionsDialog optDialog;
	optDialog.setModal(true);
	optDialog.exec();
}