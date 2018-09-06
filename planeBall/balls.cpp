#include "stdafx.h"
#include "ball.h"
#include "balls.h"

#include "Constant.h"
#include <graphics.h>
#include <conio.h>

/*struct Ball balls[LEN];

void balls_init() {
	ball_init();
	initBall(&balls[0], 2, 2, 1, 2);
}

void balls_update(int dt) {
	ball_update(&balls[0], dt);
}

void balls_render() {
	ball_render(&balls[0]);
}