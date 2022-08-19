
// From http://zetcode.com/gui/qt5/widgets2/

#include <QApplication>
#include "table.h"

int main(int argc, char* argv[])
{
	QApplication app(argc, argv);

	Table window;

	window.resize(400, 250);
	window.setWindowTitle("QTableWidget");
	window.show();

	return app.exec();
}
