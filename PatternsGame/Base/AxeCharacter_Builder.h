#pragma once
#include "Entity_AllBuilder.h"
#include"AxeCharacter.h"
class AxeCharacter_Builder :
	public Entity_AllBuilder
{
public:
	AxeCharacter_Builder();
	~AxeCharacter_Builder();
	virtual void BuildCharacter();
};

