#include "LionCharacter_Builder.h"



LionCharacter_Builder::LionCharacter_Builder()
{
}


LionCharacter_Builder::~LionCharacter_Builder()
{
}

void LionCharacter_Builder::BuildCharacter()
{
	entityAll->characters.push_back(LionCharacter());
}
