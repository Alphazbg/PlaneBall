#include "stdafx.h"
#include "plane.h"

#include "Constant.h"
#include <graphics.h>
#include <conio.h>

IMAGE plane, plane_mask;

#define PLANE_SPEED 30


int plane_x;
int plane_y;

int direction;

void plane_init() {
	loadimage(&plane, _T("plane.jpg"));
	loadimage(&plane_mask, _T("plane_mask.jpg"));

	plane_x = WINDOW_WIDTH / 2 - PLANE_WIDTH / 2;
	plane_y = WINDOW_HEIGHT / 2 - PLANE_HEIGHT / 2;


}

void plane_update() {

	moveByKeyboard();
}

void plane_show() {
	putimage(plane_x, plane_y, &plane_mask, NOTSRCERASE);
	putimage(plane_x, plane_y, &plane, SRCERASE);
}




void moveByKeyboard() {

	if (_kbhit())
	{
		int c = _getch();
		switch (c)
		{
		case 'w':
			plane_y -= PLANE_SPEED;
			break;
		case 'a':
			plane_x -= PLANE_SPEED;
			break;
		case 's':
			plane_y += PLANE_SPEED;
			break;
		case 'd':
			plane_x += PLANE_SPEED;
			break;
		default:
			break;
		}
		if (plane_x >= 500 - PLANE_WIDTH) plane_x = 500 - PLANE_WIDTH;
		if (plane_x < 0) plane_x = 0;

		if (plane_y >= 500 - PLANE_HEIGHT) plane_y = 500 - PLANE_HEIGHT;
		if (plane_y < 0) plane_y = 0;
	}

}