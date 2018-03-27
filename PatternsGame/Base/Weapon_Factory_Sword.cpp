#include "Weapon_Factory_Sword.h"
#include"Sword.h"


Sword * Weapon_Factory_Sword::CreateSword(SwordType type)
{
	switch (type) {
		case Nozambik:
			return nullptr;
	}
}

Weapon_Factory_Sword::Weapon_Factory_Sword()
{
}


Weapon_Factory_Sword::~Weapon_Factory_Sword()
{
}
