#pragma once

#include <QDialog>
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

private slots:
	void browseBtnClicked();

private:
	Ui::OptionsDialog ui;
};
