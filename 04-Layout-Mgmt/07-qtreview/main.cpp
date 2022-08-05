// From http://zetcode.com/gui/qt5/layoutmanagement/

#include <QApplication>
#include "review.h"

int main(int argc, char* argv[])
{
	QApplication app(argc, argv);

	Review window;

	window.setWindowTitle("Review");
	window.show();

	return app.exec();
}
