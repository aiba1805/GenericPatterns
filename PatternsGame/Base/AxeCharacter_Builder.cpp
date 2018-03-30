#include "AxeCharacter_Builder.h"



AxeCharacter_Builder::AxeCharacter_Builder()
{
}


AxeCharacter_Builder::~AxeCharacter_Builder()
{
}

void AxeCharacter_Builder::BuildCharacter()
{
	entityAll->characters.push_back(AxeCharacter());
}
