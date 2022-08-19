#ifndef TRANSPARENT_RECTANGLES_H
#define TRANSPARENT_RECTANGLES_H

#include <QWidget>

class TransparentRectangles : public QWidget
{

public:
	TransparentRectangles(QWidget* parent = nullptr);

protected:
	void paintEvent(QPaintEvent* e);

private:
	void doPainting();
};

#endif