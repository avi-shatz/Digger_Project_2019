#pragma once
#include "MovableObject.h"

const float MONSTER_SPEED = 70;

class Monster : public MovableObject
{
public:
	Monster(const sf::Vector2f position);
	virtual ~Monster() = 0 {};

protected:

};
