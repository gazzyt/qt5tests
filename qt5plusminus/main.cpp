// From http://zetcode.com/gui/qt5/firstprograms/

#include "plusminus.h"

int main(int argc, char* argv[])
{
	QApplication app(argc, argv);

	PlusMinus window;

	window.resize(300, 190);
	window.setWindowTitle("Hello world");
	window.show();

	return app.exec();
}