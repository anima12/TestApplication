#include "OptionsDialog.h"

#include <QFileDialog>

const QString path = "C://Program Files (x86)//Test";

OptionsDialog::OptionsDialog(QWidget *parent)
	: QDialog(parent, Qt::FramelessWindowHint)
{
	ui.setupUi(this);
	setAttribute(Qt::WA_TranslucentBackground, true);
	ui.fileEdit->setText(path);
}

OptionsDialog::~OptionsDialog()
{
}

void OptionsDialog::installBtnClicked()
{
	emit startInstall();
}

void OptionsDialog::browseBtnClicked()
{

	QString directory =
		QDir::toNativeSeparators(QFileDialog::getExistingDirectory(this, tr("Select Folder"), ui.fileEdit->text()));

	if (!directory.isEmpty()) {
		ui.fileEdit->setText(directory);
	}
}