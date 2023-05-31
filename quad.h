#pragma once
#ifndef QUAD_H
#define QUAD_H
#include "elem.h"
#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <stack>
#include <windows.h>
#include <gl/gl.h>
#include <math.h>
//#include "gametable.h"


class Quad : public Elem
{
public:
	Quad(const ColorName& name,const position& place);
	Quad( const rgb& newColor,const position& place);
	void DrawElem();

};
#endif