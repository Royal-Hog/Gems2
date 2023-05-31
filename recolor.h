#pragma once
#ifndef RECOLOR_H
#define RECOLOR_H
#include "elem.h"
#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <stack>
#include <windows.h>
#include <gl/gl.h>
#include <math.h>
class reColour : public Elem {
public:
	rgb lastColor;
	reColour(const rgb& prevCol, const position& place);
	void DrawElem();
	rgb GetColor();
};
#endif