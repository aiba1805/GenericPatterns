#include "Item_Factory_Boots.h"



Boots * Item_Factory_Boots::CreateBoots(BootsType type)
{
	switch (type) {
	case Simple:
		return nullptr;
	}
}

Item_Factory_Boots::Item_Factory_Boots()
{
}


Item_Factory_Boots::~Item_Factory_Boots()
{
}
