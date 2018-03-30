#pragma once
#include"Entity_AllBuilder.h"
#include"LionCharacter.h"
class LionCharacter_Builder
	:public Entity_AllBuilder
{
public:
	LionCharacter_Builder();
	~LionCharacter_Builder();
	virtual void BuildCharacter();
};

