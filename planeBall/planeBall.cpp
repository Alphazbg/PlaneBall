// Ball2.0.1.cpp: 定义控制台应用程序的入口点。
//

// Ball 2.0.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <graphics.h>

#include "Constant.h"
#include "screen.h"
#include "plane.h"
#include "ball.h"
#include "balls.h"

#define DELTA_TIME 1

void startup() {
	screen_init();
	plane_init();
	//balls_init();

	BeginBatchDraw();

}

void updateWithoutInput(int dt) {
	screen_update(dt);
	//balls_update(dt);
}

void updateWithInput() {
	plane_update();

}

void show() {
	screen_show();
	plane_show();

	//balls_render();

	FlushBatchDraw();

	Sleep(50);


}

void gameOver() {

	EndBatchDraw();
}

int main() {

	startup();
	while (1)
	{
		show();  // 显示画面
		updateWithoutInput(DELTA_TIME);  // 与用户输入无关的更新
		updateWithInput();     // 与用户输入有关的更新
	}
	gameOver();     // 游戏结束、后续处理
	return 0;

}



