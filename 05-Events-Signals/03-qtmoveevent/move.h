#ifndef MOVE_H
#define MOVE_H

#include <QWidget>

class Move : public QWidget
{

	Q_OBJECT

public:
	Move(QWidget* parent = nullptr);

protected:
	void moveEvent(QMoveEvent* event);
};

#endif