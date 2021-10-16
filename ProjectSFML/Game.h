#pragma once

#include "Player.h"

class Game
{
private:
	RenderWindow* window;

	Player *player;
	Texture playerTexture;

public:
	Game(RenderWindow* window);
	virtual ~Game();

	// Accessors
	inline RenderWindow& getWindow() { return *this->window; }

	// Setters

	// Function
	void Update();
	void Draw();

};

