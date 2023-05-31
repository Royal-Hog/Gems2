#pragma once
#ifndef BOMB_H
#define BOMB_H
#include "elem.h"

#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <stack>
#include <windows.h>
#include <gl/gl.h>
#include <math.h>

class Bomb : public Elem {
public:
	//Bomb(const position& place);
   Bomb(const position& place);
	void DrawElem();
	//virtual rgb GetColor() = 0;
};
#endif