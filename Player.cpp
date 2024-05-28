#include "Player.h"
#include "Deck.h"
#include<iostream>
using namespace std;
FPlayer::FPlayer()
{

}

FPlayer::~FPlayer()
{
}

void FPlayer::GetCard(FDeck& Deck)
{

	for (int Index = 0; Index < 2; ++Index)
	{
		if (Deck.CardCount == 52)
		{
			cout << "덱을 모두 소진하였습니다 . 다시 Suffle()" <<endl <<endl;
			Deck.Suffle();
			Deck.CardCount = 0;
		}
		PlayerCard[Index] = Deck.Cards[Deck.CardCount++];
	}

	std::cout << "PlayerCard 1 : " << PlayerCard[0].Shape << " " << PlayerCard[0].Card << "   PlayerCard 2 :  " << PlayerCard[1].Shape << " " << PlayerCard[1].Card;
	for (int i = 0; i < 2; i++)
	{
		if (PlayerCard[i].Card > 10)
		{
			PlayerCard[i].Card = 10;
		}
	}
	std::cout << "   합 : " << PlayerCard[0].Card + PlayerCard[1].Card << std::endl;

}
