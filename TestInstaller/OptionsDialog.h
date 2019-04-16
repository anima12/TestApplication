#pragma once

#include <QDialog>
#include <QDir>

#include "ui_OptionsDialog.h"

class OptionsDialog : public QDialog
{
	Q_OBJECT

public:
	OptionsDialog(QWidget *parent = Q_NULLPTR);
	~OptionsDialog();

	QString getPath() const
	{
		return ui.fileEdit->text();
	}

signals:
	void startInstall();

private slots:
	void browseBtnClicked();
	void installBtnClicked();

private:
	Ui::OptionsDialog ui;
};
