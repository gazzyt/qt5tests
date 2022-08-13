#ifndef SPINBOX_H
#define SPINBOX_H

#include <QWidget>
#include <QSpinBox>

class SpinBox : public QWidget
{

	Q_OBJECT

public:
	SpinBox(QWidget* parent = nullptr);

private:
	QSpinBox* spinbox;
};

#endif