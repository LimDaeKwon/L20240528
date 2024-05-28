#pragma once
#include"Card.h"
class FDeck
{
public:
	FDeck();
	virtual ~FDeck();
public:
	FCard Deck;
	int CardCount;
	void Suffle();
};

