#pragma once
#include"Entity_All.h"
class Entity_AllBuilder
{
protected:
	Entity_All *entityAll;
public:
	Entity_AllBuilder();
	~Entity_AllBuilder();
	virtual void BuildCharacter() = 0;
	virtual void BuildMob() = 0;
	virtual Entity_All* GetEntities();
};

