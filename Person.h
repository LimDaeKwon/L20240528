#pragma once
#include"Card.h"
#include"Deck.h"
class FPerson
{
public:
	FPerson();
	virtual ~FPerson();

public:
	FCard cards[2];
	virtual void GetCard(FDeck& Deck) = 0;
};

