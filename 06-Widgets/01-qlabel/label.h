#ifndef LABEL_H
#define LABEL_H

#include <QWidget>
#include <QLabel>

class Label : public QWidget
{

public:
	Label(QWidget* parent = nullptr);

private:
	QLabel* label;
};

#endif