#include "OptionsDialog.h"

#include <QDir>
#include <QFileDialog>

OptionsDialog::OptionsDialog(QWidget *parent)
	: QDialog(parent, Qt::FramelessWindowHint)
{
	ui.setupUi(this);
	setAttribute(Qt::WA_TranslucentBackground, true);
}

OptionsDialog::~OptionsDialog()
{
}

void OptionsDialog::browseBtnClicked()
{

	QString directory =
		QDir::toNativeSeparators(QFileDialog::getExistingDirectory(this, tr("Select Folder"), ui.fileEdit->text()));

	if (!directory.isEmpty()) {
		ui.fileEdit->setText(directory);
	}
}