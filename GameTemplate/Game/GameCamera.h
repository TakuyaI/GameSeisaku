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

	CVector3 m_position = CVector3::Zero();     //���_�B
	CVector3 m_playerPos = CVector3::Zero();    //Player�̍��W�B
	CVector3 m_target = CVector3::Zero();       //�����_�B
	float q = 0.0f;                             //��]�B
};

