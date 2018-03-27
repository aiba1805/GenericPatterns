#pragma once
#include "Item_Factory.h"
class Item_Factory_Boots :
	public Item_Factory
{
public:
	virtual Boots* CreateBoots(BootsType 
		type);
	Item_Factory_Boots();
	~Item_Factory_Boots();
};

