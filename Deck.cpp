
#include<iostream>
#include "Card.h"
#include "Deck.h"

FDeck::FDeck()
{
	CardCount = 0;

	for (int Type = 0; Type < 4; ++Type)
	{
		for (int Number = 1; Number <= 13; ++Number)
		{
			int Index = Type * 13 + Number-1;
			Cards[Index].Card = Number;
			switch (Type)
			{
			case 0:
				Cards[Index].Shape = "Diamond";
				break;
			case 1:
				Cards[Index].Shape = "Spade";
				break;
			case 2:
				Cards[Index].Shape = "Clova";
				break;
			case 3:
				Cards[Index].Shape = "Heart";
				break;
			}
		}
	}
	
	Cards;
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
		FCard Temp = Cards[RandomIndex1];
		Cards[RandomIndex1] = Cards[RandomIndex2];
		Cards[RandomIndex2] = Temp;
	}
}
