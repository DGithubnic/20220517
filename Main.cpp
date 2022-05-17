#include <iostream>
#include "Player.h"
#include "Goblin.h"
#include "Boar.h"
#include "Slime.h"
// #include "Monster.h"

#include <cstdlib>
#include <vector> // container STL, standard Template Library

using namespace std;

int main()
{
	Player* MyPlayer = new Player(100, 100, 100);

	srand(static_cast<unsigned int>(time(nullptr)));

	// 1-3

	//생성
	int RandomN = (rand() % 3) + 1;

	vector<Monster*> Monsters;
	for (int i = 0; i < RandomN; i++)
	{
		Monsters.push_back(new Goblin);
	}

	RandomN = (rand() % 3) + 1;
	for (int i = 0; i < RandomN; i++)
	{
		Monsters.push_back(new Boar);
	}

	RandomN = (rand() % 3) + 1;
	for (int i = 0; i < RandomN; i++)
	{
		Monsters.push_back(new Slime);
	}


	// UE에서는 Tick
	for (int i = 0; i < Monsters.size(); i++)
	{
		Monsters[i]->Move();
	}

	for (int i = 0; i < Monsters.size(); i++)
	{
		delete Monsters[i];
	}

	



	return 0;
}

// 실제 메인함수에 배치해야 메모리 생성