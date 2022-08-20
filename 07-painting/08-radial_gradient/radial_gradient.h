#ifndef RADIAL_GRADIENT_H
#define RADIAL_GRADIENT_H

#include <QWidget>

class RadialGradient : public QWidget
{

public:
	RadialGradient(QWidget* parent = nullptr);

protected:
	void paintEvent(QPaintEvent* e);

private:
	void doPainting();
};

#endif