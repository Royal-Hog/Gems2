#pragma once

#include "elem.h"




class Quad : public Elem
{
public:
	Quad(const ColorName& name,const position& place);
	Quad( const rgb& newColor,const position& place);
	void DrawElem();

};
