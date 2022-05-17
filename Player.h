#pragma once

class Player
{
public:
	Player();
	Player(int NewHp, int NewMp, int NewGold);   // instance�� �����.Ŭ������ ���赵/ �Ҵ�Ǵ� �޸� ������ instance��.
	~Player();

	int Hp;
	int Mp;
	int Gold;

	//overloading, name mangling
	void Move(int B); // MoveA(int B)
	void Move();      // MoveB(); -> �ٸ��� �����Ǳ� ����
	void Attack();
	void Pickup();

};

// Player(), Player(...)�� ��� ȣ���ϳĿ� ���� ��� �����ȴ�. �ٸ� �ϳ��� ȣ��ȴ�.

