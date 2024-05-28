#include "Dealer.h"
#include <iostream>
using namespace std;
FDealer::FDealer()
{
	DealerCard[0] = 0;
	DealerCard[1] = 0;

}

FDealer::~FDealer()
{

}

void FDealer::GetCard(FDeck& Deck)
{

	for (int Index = 0; Index < 2; ++Index)
	{
		if (Deck.CardCount == 52)
		{
			cout << "덱을 모두 소진하였습니다 . 다시 Suffle()" << endl << endl;
			Deck.Suffle();
			Deck.CardCount = 0;
		}
		DealerCard[Index] = Deck.Deck.Cards[Deck.CardCount++];
	}
	
	std::cout << "DealerCard 1 : " << DealerCard[0] << "   DealerCard 2 :  " << DealerCard[1];
	for (int i = 0; i < 2; ++i)
	{
		if (DealerCard[i] > 10)
		{
			DealerCard[i] = 10;
		}
	}
	cout << "   합 : " << DealerCard[0] + DealerCard[1] << std::endl;

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
