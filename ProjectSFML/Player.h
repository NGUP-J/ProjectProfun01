#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML\Audio.hpp>
#include <iostream>

using namespace sf;

class Player
{
private:
	Texture* texture;
	Sprite sprite;
	RectangleShape hitbox;

	int controls[3];

	int hp;
	int hpMax;

	int damage;

	int score;

public:
	Player(Texture* texture, int LEFT = 0, int RIGHT = 3, int SHOOT = 57);
	virtual ~Player();

	void Movement();
	void Update();
	void Draw(RenderTarget &target);


};

