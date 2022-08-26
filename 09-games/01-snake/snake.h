#ifndef SNAKE_H
#define SNAKE_H

#include <QWidget>
#include <QKeyEvent>
#include <QRandomGenerator>

class Snake : public QWidget
{

public:
	Snake(QWidget* parent = nullptr);

protected:
	void paintEvent(QPaintEvent* e);
	void timerEvent(QTimerEvent* e);
	void keyPressEvent(QKeyEvent* e);

private:
	QRandomGenerator random;
	QImage dot;
	QImage head;
	QImage apple;

	static constexpr int B_WIDTH = 300;
	static constexpr int B_HEIGHT = 300;
	static constexpr int DOT_SIZE = 10;
	static constexpr int ALL_DOTS = 900;
	static constexpr int RAND_POS = 29;
	static constexpr int DELAY = 140;

	int timerId;
	int dots;
	int apple_x;
	int apple_y;

	int x[ALL_DOTS];
	int y[ALL_DOTS];

	bool leftDirection;
	bool rightDirection;
	bool upDirection;
	bool downDirection;
	bool inGame;

	void loadImages();
	void initGame();
	void locateApple();
	void checkApple();
	void checkCollision();
	void move();
	void doDrawing();
	void gameOver(QPainter& qp);
};

#endif