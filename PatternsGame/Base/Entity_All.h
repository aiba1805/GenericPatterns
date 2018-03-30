#pragma once
#include <vector>
#include"Character.h"
#include"Mob.h"
class Entity_All
{
public:
	std::vector<Character> characters;
	std::vector<Mob> mobs;
	Entity_All();
	~Entity_All();
};

