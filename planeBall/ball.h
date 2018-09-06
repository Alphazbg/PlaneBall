#pragma once


struct Ball {
	int ball_x;
	int ball_y;
	int v_x;
	int v_y;

};

void ball_init();
void ball_update(struct Ball *ball, int dt);
void ball_render(struct Ball *ball);


void initBall(struct Ball *ball, int x, int y, int V_x, int V_y);

void Circle_Midpoint(struct Ball *ball, int color);