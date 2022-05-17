#pragma once

class Player
{
public:
	Player();
	Player(int NewHp, int NewMp, int NewGold);   // instance를 만든다.클래스는 설계도/ 할당되는 메모리 영역이 instance다.
	~Player();

	int Hp;
	int Mp;
	int Gold;

	//overloading, name mangling
	void Move(int B); // MoveA(int B)
	void Move();      // MoveB(); -> 다르게 생성되기 때문
	void Attack();
	void Pickup();

};

// Player(), Player(...)은 어떻게 호출하냐에 따라서 골라서 생성된다. 다만 하나만 호출된다.

