#pragma once
#include "Monster.h"
#include "Common.h"

class Slime : public Monster
{
public:
	Slime();
	virtual~Slime();

	void Move();
};

