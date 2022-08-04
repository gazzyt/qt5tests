// From http://zetcode.com/gui/qt5/firstprograms/

#include <QApplication>
#include <QWidget>

#include "mybutton.h"

int main(int argc, char* argv[])
{
	QApplication app(argc, argv);

	MyButton window;

	window.resize(250, 150);
	window.setWindowTitle("Hello world");
	window.show();

	return app.exec();
}