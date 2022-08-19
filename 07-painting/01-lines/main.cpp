// From http://zetcode.com/gui/qt5/painting/

#include <QApplication>
#include "lines.h"

int main(int argc, char* argv[])
{
	QApplication app(argc, argv);

	Lines window;

	window.resize(280, 270);
	window.setWindowTitle("Lines");
	window.show();

	return app.exec();
}
