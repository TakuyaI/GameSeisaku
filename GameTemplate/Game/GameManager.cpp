#include "stdafx.h"
#include "GameManager.h"

//GameManager�N���X�̃C���X�^���X�B
GameManager g_goMgr;

void GameManager::Update()
{
	//�o�^����Ă���Q�[���I�u�W�F�N�g�̍X�V�������ĂԁB
	for (auto go : m_goList) {
		go->Update();
	}

	for (auto it = m_goList.begin(); it != m_goList.end();) {
		if ((*it)->IsReqDelete()) {
			//�폜���N�G�X�g���󂯂Ă���̂ŁA�폜����B
			delete *it;
			it = m_goList.erase(it);
		}
		else {
			//���N�G�X�g���󂯂Ă��Ȃ��B
			it++;
		}
	}
}
