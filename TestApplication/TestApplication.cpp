#include "TestApplication.h"

TestApplication::TestApplication(QWidget *parent)
	: QDialog(parent, Qt::FramelessWindowHint)
{
	ui.setupUi(this);
	setAttribute(Qt::WA_TranslucentBackground, true);

	mVersionNumber = "1.00";
	mLatestVersionNumber = "1.10";
	ui.installedVersionText->setText(ui.installedVersionText->toPlainText() + mVersionNumber);
	ui.latestVersionText->setText(ui.latestVersionText->toPlainText() + mLatestVersionNumber);
		
	bool u = checkForUpdates();
	ui.newVersionText->setVisible(u);
	ui.updateBtn->setVisible(u);

}

bool TestApplication::
checkForUpdates() const
{
	return mVersionNumber != mLatestVersionNumber;
}
