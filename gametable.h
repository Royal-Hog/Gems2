#pragma once


#include "recolor.h"
#include "pallete.h"
//#include "elem.h"
#include "quad.h"
#include "bomb.h"
#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <stack>
#include <windows.h>
#include <gl/gl.h>
#include <math.h>

const int mapW = 10;
const int mapH = 10;






class GameTable
{
    position** pos;

    void PushUpAndRecolour(const position& posToUp);
	void BrokeElem(const position& posToUp);
	inline void PushStack(std::stack<position>& stackToUp);
	inline void FreeStack(std::stack<position>& stackToFree);
	bool IsColorEqColor(const rgb& currentColor, const position& posElem);
	void CreateBonus(const position& posToBonus);
	void BOOM();

public:
	void BuildTable();
	void ReplaceElem();
	void REColorBonus();
	void CheckRowsTable();
	void CheckColumnsTable();
	void KaBOOM();

    GameTable(int mapHi, int mapW);

    std::shared_ptr<Elem>** block;
};
