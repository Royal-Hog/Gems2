#pragma once
#ifndef PALLETE_H
#define PALLETE_H
struct rgb {
	float red, green, blue;
};

  enum ColorName {
	BLACK, WHITE, RED,
	GREEN, BLUE, YELLOW,
	PINK, CYAN
};

/*namespace colors {
	rgb pallete[8] = {
		{0.0, 0.0, 0.0},
		{1.0, 1.0, 1.0},
		{1.0, 0.0, 0.0},
		{0.0, 1.0, 0.0},
		{0.0, 0.0, 1.0},
		{1.0, 1.0, 0.0},
		{1.0, 0.0, 1.0},
		{0.0, 1.0, 1.0},
	};
};*/
struct position {
    int x, y;
};
#endif