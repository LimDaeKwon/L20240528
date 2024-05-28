#pragma once
#include "Person.h"
#include "Player.h"

class FDealer :public FPerson
{
public:
	FDealer();
	virtual ~FDealer();
	virtual void GetCard(FDeck& Deck) override;
	int DealerCard[2];
	void DeclareVictory(int PlayerCard1 , int PlayerCard2);
};

