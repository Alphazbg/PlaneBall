#include "stdafx.h"
#include "ball.h"

#include "Constant.h"
#include <graphics.h>
#include <conio.h>


/*void ball_init() {
	setcolor(GREEN);
	circle(2, 2, R);
	
}

void initBall(Ball *ball, int x, int y, int V_x, int V_y) {
	ball->ball_x = x;
	ball->ball_y = y;
	ball->v_x = V_x;
	ball->v_y = V_y;
}

void ball_update(Ball * ball, int dt) {

	initBall(&ball, 2, 2, 1, 2);
	
	ball->ball_x += ball->v_x;
	ball->ball_y += ball->v_y;

	if (ball->ball_x == 500 || ball->ball_x < R)
	{
		ball->v_x = -ball->v_x;

	}
	/*if (x + r> position_x&&x - r < position_x + 100 && y == position_y)
	{
	vy = -vy;
	}*/

/*	if (ball->ball_y == 500 || ball->ball_y < R)
	{
		ball->v_y = -ball->v_y;

	}
}

void ball_render(Ball * ball) {
	setcolor(GREEN);
	circle(ball->ball_x, ball->ball_y, R);

}

/*void Circle_Midpoint(Ball *ball, int color) {
	int tx = 0, ty = R, d = 1 - R;

	while (tx <= ty)
	{
		// 利用圆的八分对称性画点
		putpixel(ball->ball_x + tx, ball->ball_y + ty, color);
		putpixel(ball->ball_x + tx, ball->ball_y - ty, color);
		putpixel(ball->ball_x - tx, ball->ball_y + ty, color);
		putpixel(ball->ball_x - tx, ball->ball_y - ty, color);
		putpixel(ball->ball_x + ty, ball->ball_y + tx, color);
		putpixel(ball->ball_x + ty, ball->ball_y - tx, color);
		putpixel(ball->ball_x - ty, ball->ball_y + tx, color);
		putpixel(ball->ball_x + ty, ball->ball_y - tx, color);

		if (d < 0)
			d += 2 * tx + 3;
		else
			d += 2 * (tx - ty) + 5, ty--;

		tx++;
	}


}
