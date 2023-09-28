#pragma once

#include "pallete.h"
#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <stack>
#include <windows.h>
#include <gl/gl.h>
#include <math.h>


class Elem {
public:
   // Elem(ColorName name, position pos);


    rgb color{};
    position pos{};

	bool select = false;
	Elem(const ColorName& name,const position& place);

	Elem(const rgb& newColor,const position& place);

	void DrawFrame();
	virtual void DrawElem() = 0;
	virtual rgb GetColor();

};
