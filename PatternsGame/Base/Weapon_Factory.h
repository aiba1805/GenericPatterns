#pragma once
#include"Sword.h"
class Weapon_Factory
{
public:
	virtual Sword* CreateSword(SwordType type) = 0;
	Weapon_Factory();
	~Weapon_Factory();
};

