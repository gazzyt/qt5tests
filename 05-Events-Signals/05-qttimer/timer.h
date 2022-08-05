#ifndef TIMER_H
#define TIMER_H

#include <QWidget>
#include <QLabel>

class Timer : public QWidget
{

public:
	Timer(QWidget* parent = nullptr);

protected:
	void timerEvent(QTimerEvent* event);

private:
	QLabel* label;
};

#endif