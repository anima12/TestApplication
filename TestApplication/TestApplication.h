#pragma once

#include <QtWidgets/QDialog>
#include "ui_TestApplication.h"

class TestApplication : public QDialog
{
	Q_OBJECT

public:
	TestApplication(QWidget *parent = Q_NULLPTR);

private:
	bool checkForUpdates() const;
private:
	Ui::TestApplicationClass ui;
	QString mVersionNumber;
	QString mLatestVersionNumber;
};
