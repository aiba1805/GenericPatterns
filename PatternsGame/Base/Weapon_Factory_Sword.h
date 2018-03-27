#pragma once
#include"Weapon_Factory.h"
class Weapon_Factory_Sword : public Weapon_Factory
{
public:
	virtual Sword* CreateSword(SwordType type);
	Weapon_Factory_Sword();
	~Weapon_Factory_Sword();
};

