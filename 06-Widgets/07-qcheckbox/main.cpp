// From http://zetcode.com/gui/qt5/widgets2/

#include <QApplication>
#include "checkbox.h"

int main(int argc, char* argv[])
{
	QApplication app(argc, argv);

	CheckBox window;

	window.resize(250, 150);
	window.setWindowTitle("QCheckBox");
	window.show();

	return app.exec();
}
