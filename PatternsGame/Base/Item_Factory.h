#pragma once
#include "Boots.h"
class Item_Factory
{
public:
	virtual Boots* CreateBoots(BootsType type) = 0;
	Item_Factory();
	~Item_Factory();
};

