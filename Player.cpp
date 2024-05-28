#include "Player.h"
#include "Deck.h"
#include<iostream>
FPlayer::FPlayer()
{
}

FPlayer::~FPlayer()
{
}

void FPlayer::GetCard(FDeck& Deck)
{
	PlayerCard[0] = Deck.Deck.Cards[Deck.CardCount++];
	PlayerCard[1] = Deck.Deck.Cards[Deck.CardCount++];

	std::cout << "PlayerCard 1 : " << PlayerCard[0] << "   PlayerCard 2 :  " << PlayerCard[1];
	for (int i = 0; i < 2; i++)
	{
		if (PlayerCard[i] > 10)
		{
			PlayerCard[i] = 10;
		}
	}
	std::cout << "   гу : " << PlayerCard[0] + PlayerCard[1] << std::endl;

}
