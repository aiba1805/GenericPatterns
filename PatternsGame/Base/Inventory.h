#pragma once
#include"Items_All.h"
#include"Weapons_All.h"
class Inventory
{
public:
	Items_All* items;
	Weapons_All* weapons;
	Inventory();
	~Inventory();
};

