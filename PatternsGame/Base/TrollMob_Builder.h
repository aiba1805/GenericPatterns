#pragma once
#include "Entity_AllBuilder.h"
#include"TrollMob.h"
class TrollMob_Builder :
	public Entity_AllBuilder
{
public:
	TrollMob_Builder();
	~TrollMob_Builder();
	virtual void BuildMob();
};

