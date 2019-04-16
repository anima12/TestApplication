#include "TestInstaller.h"
#include "OptionsDialog.h"

#include <QDir>
#include <QFileDialog>
#include <QProcess>

TestInstaller::TestInstaller(QWidget *parent)
	: QDialog(parent, Qt::FramelessWindowHint)
	, mOptions(new OptionsDialog(this))
{
	ui.setupUi(this);
	setAttribute(Qt::WA_TranslucentBackground, true);

	connect(mOptions, SIGNAL(startInstall()), this, SLOT(installBtnClicked()));
}

void TestInstaller::optionsBtnClicked()
{
	mOptions->setModal(true);
	mOptions->exec();
}

namespace {

bool copyFiles(QString fromDir, QString toDir)
{
	QDir dir;
	dir.setPath(fromDir);

	fromDir += QDir::separator();
	toDir += QDir::separator();

	dir.mkpath(toDir);

	foreach(QString file, dir.entryList(QDir::Files))
	{
		if (file == "TestInstaller.exe") {
			continue;
		}
		QString from = fromDir + file;
		QString to = toDir + file;

		if (QFile::exists(to))
		{
			continue;
		}

		if (QFile::copy(from, to) == false)
		{
			return false;
		}
	}

	foreach(QString copyDir, dir.entryList(QDir::Dirs | QDir::NoDotAndDotDot))
	{
		QString from = fromDir + copyDir;
		QString to = toDir + copyDir;

		if (dir.mkpath(to) == false)
		{
			return false;
		}

		if (copyFiles(from, to) == false)
		{
			return false;
		}
	}

	return true;
}

} // unnamed namespace


void TestInstaller::installBtnClicked()
{
	//TODO: copy app
	QString source = QCoreApplication::applicationDirPath();

	QString target = QDir::fromNativeSeparators(mOptions->getPath());
	copyFiles(source, target);

	QProcess* process = new QProcess();
	process->setWorkingDirectory(target);
	process->start("TestApplication.exe");

	close();
}