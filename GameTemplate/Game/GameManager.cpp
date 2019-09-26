#include "stdafx.h"
#include "GameManager.h"

//GameManagerクラスのインスタンス。
GameManager g_goMgr;

void GameManager::Update()
{
	//登録されているゲームオブジェクトの更新処理を呼ぶ。
	for (auto go : m_goList) {
		go->Update();
	}

	for (auto it = m_goList.begin(); it != m_goList.end();) {
		if ((*it)->IsReqDelete()) {
			//削除リクエストを受けているので、削除する。
			delete *it;
			it = m_goList.erase(it);
		}
		else {
			//リクエストを受けていない。
			it++;
		}
	}
}
