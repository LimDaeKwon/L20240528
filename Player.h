#pragma once
#include "Person.h"
class FPlayer :public FPerson
{
public:
	
	FPlayer();
	virtual ~FPlayer();
	virtual void GetCard(FDeck& Deck) override;
	int PlayerCard[2];
};

