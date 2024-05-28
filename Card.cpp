#include "Card.h"

FCard::FCard()
{
	for (int Index = 0; Index < 52; ++Index)
	{
		Cards[Index] = (Index % 13) + 1;
	}
}

FCard::~FCard()
{
}
