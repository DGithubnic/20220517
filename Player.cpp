#include "Player.h"
#include <iostream>

using namespace std;

Player::Player()   // ���ڵ� �ʱ�ȭ�� �������.
	:Hp(0), Mp(0), Gold(0)
{
	cout << "������" << endl;
	//Hp = 0;
	//Mp = 0;
	//Gold = 0;
}

Player::Player(int NewHp, int NewMp, int NewGold)   // _�� ���� �����Ѵ�.
	// �Ķ������� �ٲ�� �̹� �ִٴ� ��
{
	Hp = NewHp;
	Mp = NewMp;
	Gold = NewGold;

	cout << "Player ������ ����" << endl;

}

Player::~Player()
{
	cout << "�Ҹ���" << endl;
}

void Player::Move()
{

}
void Player::Attack()
{

}
void Player::Pickup()
{

}