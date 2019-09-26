#include "stdafx.h"
#include "BackGround.h"


BackGround::BackGround()
{
	m_model.Init(L"Assets/modelData/stage_test.cmo");
}


BackGround::~BackGround()
{
}

void BackGround::Update()
{
	m_model.UpdateWorldMatrix(CVector3::Zero(), CQuaternion::Identity(), CVector3::One() * 10.0f);
	m_model.Draw(
		g_camera3D.GetViewMatrix(),
		g_camera3D.GetProjectionMatrix()
	);
}