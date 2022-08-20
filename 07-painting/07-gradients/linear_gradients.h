#ifndef LINEAR_GRADIENTS_H
#define LINEAR_GRADIENTS_H

#include <QWidget>

class LinearGradients : public QWidget
{

public:
	LinearGradients(QWidget* parent = nullptr);

protected:
	void paintEvent(QPaintEvent* e);

private:
	void doPainting();
};

#endif