#pragma once
#include"Entity_AllBuilder.h"
class DragonMob_Builder : public Entity_AllBuilder
{
public:
	DragonMob_Builder();
	~DragonMob_Builder();
	virtual void CreateMob();
};

