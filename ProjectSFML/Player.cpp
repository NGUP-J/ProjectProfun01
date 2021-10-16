#include "Player.h"

enum controls {LEFT = 0, RIGHT, SHOOT};

Player::Player(Texture* texture, int LEFT, int RIGHT, int SHOOT)
	:hp(3), hpMax(3), damage(1), score(0)
{
	this->texture = texture;
	this->sprite.setTexture(*this->texture);

	this->sprite.setScale({ 4.0f, 4.0f });
	this->sprite.setPosition({ 500.f, 700.f });
	this->sprite.setTextureRect({ 0, 0, 11, 8 });

	this->controls[controls::LEFT] = LEFT;
	this->controls[controls::RIGHT] = RIGHT;
	this->controls[controls::SHOOT] = SHOOT;
}

Player::~Player()
{

}

void Player::Movement()
{
	if (Keyboard::isKeyPressed(Keyboard::Key(this->controls[controls::LEFT])))
	{
		this->sprite.move(-10.f, 0.f);
	}
	if (Keyboard::isKeyPressed(Keyboard::Key(this->controls[controls::RIGHT])))
	{
		this->sprite.move(10.f, 0.f);
	}
	if (Keyboard::isKeyPressed(Keyboard::Key(this->controls[controls::SHOOT])))
	{
		std::cout << "SPACE" << "\n";
	}
}

void Player::Update()
{
	this->Movement();

}

void Player::Draw(RenderTarget &target)
{
	target.draw(this->sprite);
}