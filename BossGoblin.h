#pragma once
#include "Goblin.h"
#include <iostream>

using namespace std;


class BossGoblin : public Goblin
{
public:
	void Move() override
	{
		cout << "보스 고블린 이동" << endl;
	}
};