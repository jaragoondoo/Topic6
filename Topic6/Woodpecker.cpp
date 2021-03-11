#include "Woodpecker.h"
#include <iostream>
using namespace std;

Woodpecker::Woodpecker()
{
	peckSpeed = 0;
}

void Woodpecker::Move()
{
	cout << "Moves how a woodpecker may move\n";
}

int Woodpecker::CalculateBirdStrength()
{
	return peckSpeed * wingspan * weight;
}
