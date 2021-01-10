// From http://zetcode.com/gui/qt5/firstprograms/

#include <QApplication>
#include <QWidget>

#include "cursors.h"

int main(int argc, char* argv[])
{
	QApplication app(argc, argv);

	Cursors window;

	window.resize(250, 150);
	window.setWindowTitle("Hello world");
	window.setToolTip("QWidget");
	window.show();

	return app.exec();
}
