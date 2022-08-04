// From http://zetcode.com/gui/qt5/layoutmanagement/

#include <QApplication>
#include <QWidget>

#include "absolute.h"

int main(int argc, char* argv[])
{
	QApplication app(argc, argv);

	Absolute window;

	window.setWindowTitle("Absolute");
	window.show();

	return app.exec();
}
