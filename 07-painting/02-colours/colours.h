#ifndef COLOURS_H
#define COLOURS_H

#include <QWidget>

class Colours : public QWidget
{

public:
	Colours(QWidget* parent = nullptr);

protected:
	void paintEvent(QPaintEvent* event);

private:
	void doPainting();
};

#endif