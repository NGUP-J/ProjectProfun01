#include "Game.h"
Game::Game(RenderWindow* window)
{
	this->window = window;
	this->window->setFramerateLimit(60);

	// Init textures
	playerTexture.loadFromFile("resource/img/si/player.png");

	// Init player
	player = new Player(&this->playerTexture);
}

Game::~Game()
{
	delete player;
}

void Game::Update()
{
	player->Update();
}

void Game::Draw()
{
	window->clear();

	player->Draw(*window);

	window->display();
}