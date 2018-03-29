#pragma once
#include <vector>
#include"Character.h"
#include"Mob.h"
class Entity_All
{
	std::vector<Character> characters;
	std::vector<Mob> mobs;
public:
	Entity_All();
	~Entity_All();
};

