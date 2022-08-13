// From http://zetcode.com/gui/qt5/widgets/

#include <QApplication>
#include "statusbar.h"

int main(int argc, char* argv[])
{
	QApplication app(argc, argv);

	StatusBar window;

	window.resize(300, 200);
	window.setWindowTitle("QStatusBar");
	window.show();

	return app.exec();
}
