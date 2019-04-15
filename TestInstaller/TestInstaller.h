#pragma once

#include <QtWidgets/QDialog>
#include "ui_TestInstaller.h"
#include "OptionsDialog.h"

class TestInstaller : public QDialog
{
	Q_OBJECT

public:
	TestInstaller(QWidget *parent = Q_NULLPTR);
private slots:
	void optionsBtnClicked();
	void installBtnClicked();
private:
	Ui::TestInstallerClass ui;
	OptionsDialog* mOptions;
};
