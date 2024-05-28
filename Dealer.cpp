#include <iostream>
#include "Dealer.h"
#include "Card.h"
#include "Player.h"
#include "Person.h"
using namespace std;

FDealer::FDealer()
{

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
			cout << "���� ��� �����Ͽ����ϴ� . �ٽ� Suffle()" << endl << endl;
			Deck.Suffle();
			Deck.CardCount = 0;
		}
		DealerCard[Index] = Deck.Cards[Deck.CardCount++];
	}
	
	std::cout << "DealerCard 1 : " << DealerCard[0].Shape << " " << DealerCard[0].Card << "   DealerCard 2 :  " << DealerCard[1].Shape << " " << DealerCard[1].Card;
	for (int i = 0; i < 2; ++i)
	{
		if (DealerCard[i].Card > 10)
		{
			DealerCard[i].Card = 10;
		}
	}
	cout << "   �� : " << DealerCard[0].Card + DealerCard[1].Card << std::endl;

}

void FDealer::DeclareVictory(int PlayerCard1, int PlayerCard2)
{
	if (DealerCard[0].Card + DealerCard[1].Card > PlayerCard1 +PlayerCard2)
	{
		cout << "Dealer Win!!!" << endl;
	}
	else if (DealerCard[0].Card + DealerCard[1].Card < PlayerCard1 + PlayerCard2)
	{
		cout << "Player Win!!!" << endl;
	}
	else
	{
		cout << "Drow!!!" << endl;
	}
}
