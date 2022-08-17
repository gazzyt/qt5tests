// From http://zetcode.com/gui/qt5/widgets2/

#include <QApplication>
#include "pixmap.h"

int main(int argc, char* argv[])
{
	QApplication app(argc, argv);

	Pixmap window;

	window.setWindowTitle("QPixmap");
	window.show();

	return app.exec();
}
