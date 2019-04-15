#include "TestInstaller.h"
#include "OptionsDialog.h"

#include <QDir>
#include <QFileDialog>

TestInstaller::TestInstaller(QWidget *parent)
	: QDialog(parent, Qt::FramelessWindowHint)
	, mOptions(nullptr)
{
	ui.setupUi(this);
	setAttribute(Qt::WA_TranslucentBackground, true);

}

void TestInstaller::optionsBtnClicked()
{
	if (mOptions == nullptr) {
		mOptions = new OptionsDialog(this);
		mOptions->setModal(true);
	}
	mOptions->exec();
}

void TestInstaller::installBtnClicked()
{
	//TODO: copy app
	//std::string file = mOptions->getPath().toStdString();
	std::string file = "start E://projects//TestApplication//x64//Debug//";
	file.append("TestApplication.exe");

	system(file.c_str());

	close();
}