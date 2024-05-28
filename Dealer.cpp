#include "Dealer.h"
#include <iostream>
using namespace std;
FDealer::FDealer()
{

}

FDealer::~FDealer()
{

}

void FDealer::GetCard(FDeck& Deck)
{
	DealerCard[0] = Deck.Deck.Cards[Deck.CardCount++];
	DealerCard[1] = Deck.Deck.Cards[Deck.CardCount++];
	
	std::cout << "DealerCard 1 : " << DealerCard[0] << "   DealerCard 2 :  " << DealerCard[1];
	for (int i = 0; i < 2; ++i)
	{
		if (DealerCard[i] > 10)
		{
			DealerCard[i] = 10;
		}
	}
	cout << "   гу : " << DealerCard[0] + DealerCard[1] << std::endl;

}

void FDealer::DeclareVictory(int PlayerCard1, int PlayerCard2)
{
	if (DealerCard[0] + DealerCard[1] > PlayerCard1 +PlayerCard2)
	{
		cout << "Dealer Win!!!" << endl;
	}
	else if (DealerCard[0] + DealerCard[1] < PlayerCard1 + PlayerCard2)
	{
		cout << "Player Win!!!" << endl;
	}
	else
	{
		cout << "Drow!!!" << endl;
	}
}
