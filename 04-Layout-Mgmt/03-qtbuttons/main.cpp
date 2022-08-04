// From http://zetcode.com/gui/qt5/layoutmanagement/

#include <QApplication>
#include "buttons.h"

int main(int argc, char* argv[])
{
	QApplication app(argc, argv);

	Buttons window;

	window.resize(290, 170);
	window.setWindowTitle("Buttons");
	window.show();

	return app.exec();
}
