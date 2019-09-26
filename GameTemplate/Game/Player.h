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
	/// ���W��ݒ�B
	/// </summary>
	void SetPosition(CVector3 pos)
	{
		m_position = pos;
	}
	/// <summary>
	/// ���W���擾�B
	/// </summary>
	CVector3 GetPosition()
	{
		return m_position;
	}
private:
	CVector3 m_position = CVector3::Zero(); //���W�B
	SkinModel m_model;						//�X�L�����f���B
	float ySpeed = 0.0f;                    //�d�́B
	CVector3 m_moveSpeed = CVector3::Zero();//
	CharacterController m_charaCon;         //�L�����N�^�[�R���g���[���[�B
};