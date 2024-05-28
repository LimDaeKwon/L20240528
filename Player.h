#pragma once
#include "Person.h"
class FCard;
class FPlayer :public FPerson
{
public:
	
	FPlayer();
	virtual ~FPlayer();
	virtual void GetCard(FDeck& Deck) override;
	FCard PlayerCard[2];
};

