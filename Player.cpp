#include "Player.h"
#include "Deck.h"
#include<iostream>
using namespace std;
FPlayer::FPlayer()
{
	PlayerCard[0] = 0;
	PlayerCard[1] = 0;

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
		PlayerCard[Index] = Deck.Deck.Cards[Deck.CardCount++];
	}

	std::cout << "PlayerCard 1 : " << PlayerCard[0] << "   PlayerCard 2 :  " << PlayerCard[1];
	for (int i = 0; i < 2; i++)
	{
		if (PlayerCard[i] > 10)
		{
			PlayerCard[i] = 10;
		}
	}
	std::cout << "   합 : " << PlayerCard[0] + PlayerCard[1] << std::endl;

}
