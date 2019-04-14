#pragma once

#include <QtWidgets/QDialog>
#include "ui_TestInstaller.h"

class TestInstaller : public QDialog
{
	Q_OBJECT

public:
	TestInstaller(QWidget *parent = Q_NULLPTR);
private slots:
	void optionsBtnClicked();
private:
	Ui::TestInstallerClass ui;
};
