#pragma once
#include "Goblin.h"
#include "Common.h"


class BossGoblin : public Goblin
{
public:
	void Move() override
	{
		cout << "������� �̵�" << endl;
	}
};