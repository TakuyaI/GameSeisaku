#pragma once
class IGameObject
{
public:
	/// <summary>
	/// �X�V�֐��B
	/// </summary>
	virtual void Update() = 0;
	virtual bool Start() { return true; };
	/// <summary>
	/// �폜���N�G�X�g���s���B
	/// </summary>
	void RequestDelete()
	{
		isReqDelete = true;
	}

	//�폜���N�G�X�g���󂯂Ă��邩���ׂ�B
	//true���Ԃ��Ă�����A���N�G�X�g���󂯂Ă���B
	bool IsReqDelete()
	{
		return isReqDelete; 
	}

private:
	bool isReqDelete = false;//�폜�t���O�B
};

