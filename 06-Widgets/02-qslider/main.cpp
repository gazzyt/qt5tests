// From http://zetcode.com/gui/qt5/widgets/

#include <QApplication>
#include "slider.h"

int main(int argc, char* argv[])
{
	QApplication app(argc, argv);

	Slider window;

	window.setWindowTitle("QSlider");
	window.show();

	return app.exec();
}
