#pragma once
class Game;
class Player;
#include "IGameObject.h"
#include "Player.h"
#include "Game.h"
class GameCamera : public IGameObject
{
public:
	GameCamera();
	~GameCamera();

	void Update();


	void SetPlayer(Player* pl)
	{
		m_player = pl;
	}
private:
	Player* m_player;

	CVector3 m_position = CVector3::Zero();     //視点。
	CVector3 m_playerPos = CVector3::Zero();    //Playerの座標。
	CVector3 m_target = CVector3::Zero();       //注視点。
	float q = 0.0f;                             //回転。
};

