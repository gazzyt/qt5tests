
// From http://zetcode.com/gui/qt5/widgets2/

#include <QApplication>
#include "splitter.h"

int main(int argc, char* argv[])
{
	QApplication app(argc, argv);

	Splitter window;

	window.resize(350, 300);
	window.setWindowTitle("QSplitter");
	window.show();

	return app.exec();
}
