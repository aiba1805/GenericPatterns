#include "TrollMob_Builder.h"



TrollMob_Builder::TrollMob_Builder()
{
}


TrollMob_Builder::~TrollMob_Builder()
{
}

void TrollMob_Builder::BuildMob()
{
	entityAll->mobs.push_back(TrollMob());
}
