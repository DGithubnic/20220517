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

	srand(static_cast<unsigned int>(time(NULL)));

	// 1-3

	//����
	int RandomG = (rand() % 3) + 1;
	int RandomB = (rand() % 3) + 1;
	int RandomS = (rand() % 3) + 1;

	vector<Monster*> Monsters;
	for (int i = 0; i < RandomG; i++)
	{
		Monsters.push_back(new Goblin);
	}

	for (int i = 0; i < RandomG; i++)
	{
		Monsters.push_back(new Boar);
	}

	for (int i = 0; i < RandomG; i++)
	{
		Monsters.push_back(new Slime);
	}


	// UE������ Tick
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

// ���� �����Լ��� ��ġ�ؾ� �޸� ����