#pragma once
#include "IGameObject.h"
class BackGround : public IGameObject
{
public:
	BackGround();
	~BackGround();

	void Update();

private:
	SkinModel m_model;
};

