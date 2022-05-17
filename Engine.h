#pragma once
#include "World.h"
#include "CustomWorld.h"

class Engine
{
public:
	Engine();	// 持失切 識情
	virtual ~Engine();	// 社瑚切 識情

	void Run();

	World* MyWorld;
};