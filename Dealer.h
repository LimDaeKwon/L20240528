#pragma once
#include"Person.h"
class FCard;
class FPerson;

class FDealer :public FPerson
{
public:
	FDealer();
	virtual ~FDealer();
	virtual void GetCard(FDeck& Deck) override;
	FCard DealerCard[2];
	void DeclareVictory(int PlayerCard1 , int PlayerCard2);
};

