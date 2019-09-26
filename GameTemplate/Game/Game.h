#pragma once
class GameCamera;
#include "IGameObject.h"
#include "Player.h"
#include "BackGround.h"
#include "GameCamera.h"
class Game : public IGameObject
{
public:
	Game();
	~Game();

	void Update();

	
private:
	Player* player;
	BackGround* back;
	GameCamera* gc;

};

