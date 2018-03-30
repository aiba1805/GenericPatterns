#include "DragonMob_Builder.h"




DragonMob_Builder::DragonMob_Builder()
{

}


DragonMob_Builder::~DragonMob_Builder()
{
}

void DragonMob_Builder::CreateMob()
{
	entityAll->mobs.push_back(DragonMob());
}
