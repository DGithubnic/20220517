#pragma once
#include "World.h"
#include "CustomWorld.h"

class Engine
{
public:
	Engine();	// ������ ����
	virtual ~Engine();	// �Ҹ��� ����

	void Run();

	World* MyWorld;
};