#pragma once
#include "IGameObject.h"
class GameManager
{
public:
	/// <summary>
	/// �X�V�B
	/// </summary>
	void Update();
	/// <summary>
	/// �Q�[���I�u�W�F�N�g��ǉ��B
	/// </summary>
	template<class T>
	T* NewGameObject()
	{
		T* newObj = new T;
		m_goList.push_back(newObj);
		return newObj;
	}
	
	void DeleteGameObject(IGameObject* go)
	{
		//���X�g����T���āA����������폜����B
		for (auto it = m_goList.begin();
			it != m_goList.end();
			it++
			) {
			if ((*it) == go) {
				//�폜�̃��N�G�X�g�𑗂�B
				go->RequestDelete();
				return;
			}
		}
	}
	
private:
	std::vector<IGameObject*> m_goList; //�ϒ��z��B
	
};
//�O������A�N�Z�X����̂ŁAextern�錾���K�v�B
extern GameManager g_goMgr;

