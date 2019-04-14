#include "TestInstaller.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	TestInstaller w;
	w.show();
	return a.exec();
}
