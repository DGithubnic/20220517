#include "Monster.h"
#include <iostream>

using namespace std;

Monster::Monster()
{
	cout << "몬스터 생성자" << endl;
}

Monster::~Monster()
{
	cout << "몬스터 소멸자" << endl;
}

int Hp = 0;
int Gold = 0;

void Monster::Drop()
{

}
void Monster::Move()
{
	cout << "몬스터 이동" << endl;
}
void Monster::Attack()
{

}