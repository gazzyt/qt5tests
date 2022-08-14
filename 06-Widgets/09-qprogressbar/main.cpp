// From http://zetcode.com/gui/qt5/widgets2/

#include <QApplication>
#include "progressbar.h"

int main(int argc, char* argv[])
{
	QApplication app(argc, argv);

	ProgressBarEx window;

	window.resize(250, 150);
	window.setWindowTitle("QProgressBar");
	window.show();

	return app.exec();
}
