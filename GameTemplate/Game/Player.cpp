#include "stdafx.h"
#include "Player.h"


Player::Player()
{
	//cmo�t�@�C���̓ǂݍ��݁B
	m_model.Init(L"Assets/modelData/unityChan.cmo");
	m_charaCon.Init(150.0f, 200.0f, m_position);
}


Player::~Player()
{
}

void Player::Update()
{
	/*if (GetAsyncKeyState(VK_LEFT)) {
		m_position.x -= 10.0f;
	}
	if (GetAsyncKeyState(VK_RIGHT)) {
		m_position.x += 10.0f;
	}
	if (GetAsyncKeyState(VK_UP)) {
		m_position.z += 10.0f;
	}
	if (GetAsyncKeyState(VK_DOWN)) {
		m_position.z -= 10.0f;
	}*/

	m_moveSpeed.x = g_pad->GetLStickXF()* 20.0f;
	m_moveSpeed.z = g_pad->GetLStickYF()* 20.0f;

	m_position = m_charaCon.Execute(1.0f,m_moveSpeed);
	//if (GetAsyncKeyState('J')) {
	//	ySpeed = 20.0f;
	//}
	//ySpeed -= 1.0f;
	//
	//m_position.y += ySpeed;
	//if (m_position.y <= 0.0f) {
	//	//Player�̍��W��0�ȉ��ɂȂ�����A
	//	//�d�͂�0�ɂ���B
	//	ySpeed = 0.0f;
	//	m_position.y = 0.0f;
	//}

	//���[���h�s��̍X�V�B
	m_model.UpdateWorldMatrix(m_position, CQuaternion::Identity(), CVector3::One() * 1.0f);
	/*m_model.Draw(
		g_camera3D.GetViewMatrix(),
		g_camera3D.GetProjectionMatrix()
	);*/
}
void Player::Draw()
{
	
}