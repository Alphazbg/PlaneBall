#include "stdafx.h"
#include "Constant.h"
#include "screen.h"
#include <stdlib.h>
#include <graphics.h>

IMAGE background;

int backgroundScroll;
//int groundScroll;

int BACKGROUND_SCROLL_SPEED = 8;
int GROUND_SCROLL_SPEED = 10;
int BACKGROUND_LOOPING_POINT = 413;


void screen_init() {
	initgraph(WINDOW_WIDTH, WINDOW_HEIGHT);
	loadimage(&background, _T("background.jpg"));
	//loadimage(&ground, _T("ground.jpg"));

}
void screen_update(int dt) {
	//backgroundScroll = (backgroundScroll + BACKGROUND_SCROLL_SPEED * dt)
	//% BACKGROUND_LOOPING_POINT;
	//groundScroll = (groundScroll + GROUND_SCROLL_SPEED * dt)
	//% WINDOW_WIDTH;
}
void screen_show() {
	putimage(-backgroundScroll, 0, &background);
	//putimage(-groundScroll, WINDOW_HEIGHT - 16, &ground);

}