#pragma once

#include "recolor.h"
#include "quad.h"
#include "bomb.h"


const int mapW = 10;
const int mapH = 10;

class GameTable
{



    

public:
	void BuildTable();
	void ReplaceElem();
	void REColorBonus();
	int CheckRowsTable();
	int CheckColumnsTable();
	void KaBOOM();

	position** pos;

	void PushUpAndRecolour(const position& posToUp);
	void BrokeElem(const position& posToUp);
	void PushStack(stack<position>& stackToUp);
	bool IsColorEqColor(const rgb& currentColor, const position& posElem);
	void CreateBonus(const position& posToBonus);
	void BOOM();

    GameTable(int mapHi, int mapW);

    shared_ptr<Elem>** block;
};
