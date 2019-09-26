#include "stdafx.h"
#include "Game.h"
#include "GameManager.h"

Game::Game()
{
	
	player = g_goMgr.NewGameObject<Player>();
	back = g_goMgr.NewGameObject<BackGround>();
	gc = g_goMgr.NewGameObject<GameCamera>();
	gc->SetPlayer(player);
	
}


Game::~Game()
{
	
}

void Game::Update()
{
	
}