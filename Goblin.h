#pragma once
#include "Monster.h"
#include "Common.h"

class Goblin : public Monster
{
public:
	Goblin();
	virtual~Goblin();

	void Move();

};

