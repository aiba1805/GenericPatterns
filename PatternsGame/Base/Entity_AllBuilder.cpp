#include "Entity_AllBuilder.h"



Entity_AllBuilder::Entity_AllBuilder() : entityAll(new Entity_All)
{
}


Entity_AllBuilder::~Entity_AllBuilder()
{
}

Entity_All * Entity_AllBuilder::GetEntities()
{
	return entityAll;
}
