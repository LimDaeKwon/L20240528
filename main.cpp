#include<iostream>
#include"Dealer.h"
#include"Player.h"
#include"Deck.h"

using namespace std;

int main()
{
	srand(time(nullptr));
	
	FPerson* Persons[2]; 
	Persons[0] = new FDealer();
	Persons[1] = new FPlayer();
	FDeck MyDeck;
	MyDeck.Suffle();
	int IsRunning = true;
	while (IsRunning)
	{
		int StartGame = 0;
		cin >> StartGame;

		if (StartGame == 1)
		{
			cout << "Card 11 : J , 12 : Q , 13 : K  // 10으로 계산" << endl << endl;

			for (int Index = 0; Index < 2; ++Index)
			{
				Persons[Index]->GetCard(MyDeck);
			}
			dynamic_cast<FDealer*>(Persons[0])->DeclareVictory(dynamic_cast<FPlayer*>(Persons[1])->PlayerCard[0].Card, dynamic_cast<FPlayer*>(Persons[1])->PlayerCard[1].Card);
			cout << "계속하려면 1 , 끝내려면 0 입력" << endl<<endl;
		}
		if(StartGame == 0)
		{
			IsRunning = false;
		}
	}
	
	for (int Index = 0; Index < 2; ++Index)
	{
		delete Persons[Index];
	}
	return 0;
}