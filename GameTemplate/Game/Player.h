#pragma once
#include "character/CharacterController.h"
#include "IGameObject.h"
class Player:public IGameObject
{
public:
	Player();
	~Player();
	void Update();
	void Draw();
	/// <summary>
	/// 座標を設定。
	/// </summary>
	void SetPosition(CVector3 pos)
	{
		m_position = pos;
	}
	/// <summary>
	/// 座標を取得。
	/// </summary>
	CVector3 GetPosition()
	{
		return m_position;
	}
private:
	CVector3 m_position = CVector3::Zero(); //座標。
	SkinModel m_model;						//スキンモデル。
	float ySpeed = 0.0f;                    //重力。
	CVector3 m_moveSpeed = CVector3::Zero();//
	CharacterController m_charaCon;         //キャラクターコントローラー。
};