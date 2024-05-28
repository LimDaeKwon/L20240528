#include "Deck.h"
#include<iostream>
FDeck::FDeck()
{
	CardCount = 0;
}

FDeck::~FDeck()
{
}

void FDeck::Suffle()
{
	
	int SuffleCount = 10000;
	for (int Count = 0; Count < SuffleCount; ++Count)
	{
		int RandomIndex1 = rand() % 52;
		int RandomIndex2 = rand() % 52;
		int Temp = Deck.Cards[RandomIndex1];
		Deck.Cards[RandomIndex1] = Deck.Cards[RandomIndex2];
		Deck.Cards[RandomIndex2] = Temp;
	}
}
