#ifndef CHECKBOX_H
#define CHECKBOX_H

#include <QWidget>

class CheckBox : public QWidget
{

	Q_OBJECT

public:
	CheckBox(QWidget* parent = nullptr);

private slots:
	void showTitle(int);

};

#endif