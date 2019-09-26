#include "stdafx.h"
#include "GameCamera.h"



GameCamera::GameCamera()
{
	g_camera3D.SetNear(10.0f);
	g_camera3D.SetFar(10000.0f);
}


GameCamera::~GameCamera()
{
}

void GameCamera::Update()
{
	m_playerPos = m_player->GetPosition();
	m_playerPos.y += 100.0f;

	m_position = m_playerPos;
	m_target = m_playerPos;
	m_target.z += 1000.0f;

	/*if (GetAsyncKeyState('A')) {
		q--;
	}
	if (GetAsyncKeyState('D')) {
		q++;
	}*/
	q += g_pad->GetRStickXF() * 2.0f;

	CQuaternion qRot;
	qRot.SetRotationDeg(CVector3::AxisY(), 2.0f * q);
	qRot.Multiply(m_target);

	g_camera3D.SetTarget(m_target);
	g_camera3D.SetPosition(m_position);
}