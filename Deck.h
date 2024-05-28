#pragma once
using namespace std;
class FCard;

class FDeck
{
public:
	FDeck();
	virtual ~FDeck();
public:
	FCard Cards[52];
	int CardCount;
	void Suffle();
};

