#pragma once

class Monster
{
public:
	Monster();
	virtual ~Monster();

	int HP;
	int Gold;

	void Drop();
	virtual void Move();
	void Attack();
};

