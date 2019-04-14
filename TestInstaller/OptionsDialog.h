#pragma once

#include <QDialog>
#include "ui_OptionsDialog.h"

class OptionsDialog : public QDialog
{
	Q_OBJECT

public:
	OptionsDialog(QWidget *parent = Q_NULLPTR);
	~OptionsDialog();

private slots:
	void browseBtnClicked();

private:
	Ui::OptionsDialog ui;
};
