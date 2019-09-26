#pragma once
#include "IGameObject.h"
class GameManager
{
public:
	/// <summary>
	/// 更新。
	/// </summary>
	void Update();
	/// <summary>
	/// ゲームオブジェクトを追加。
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
		//リストから探して、見つかったら削除する。
		for (auto it = m_goList.begin();
			it != m_goList.end();
			it++
			) {
			if ((*it) == go) {
				//削除のリクエストを送る。
				go->RequestDelete();
				return;
			}
		}
	}
	
private:
	std::vector<IGameObject*> m_goList; //可変長配列。
	
};
//外部からアクセスするので、extern宣言も必要。
extern GameManager g_goMgr;

