// From http://zetcode.com/gui/qt5/widgets/

#include <QApplication>
#include "ledit.h"

int main(int argc, char* argv[])
{
	QApplication app(argc, argv);

	LEdit window;

	window.setWindowTitle("QLineEdit");
	window.show();

	return app.exec();
}
