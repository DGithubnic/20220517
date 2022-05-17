#include "Player.h"
#include <iostream>

using namespace std;

Player::Player()   // 인자들 초기화는 해줘야함.
	:Hp(0), Mp(0), Gold(0)
{
	cout << "생성자" << endl;
	//Hp = 0;
	//Mp = 0;
	//Gold = 0;
}

Player::Player(int NewHp, int NewMp, int NewGold)   // _를 보통 쓰긴한다.
	// 파란색으로 바뀌면 이미 있다는 뜻
{
	Hp = NewHp;
	Mp = NewMp;
	Gold = NewGold;

	cout << "Player 생성자 있음" << endl;

}

Player::~Player()
{
	cout << "소멸자" << endl;
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