#ifndef LINES_H
#define LINES_H

#include <QWidget>

class Lines : public QWidget
{

public:
	Lines(QWidget* parent = nullptr);

protected:
	void paintEvent(QPaintEvent* event);
	void drawLines(QPainter* qp);

};

#endif