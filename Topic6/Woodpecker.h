#pragma once
#include "Bird.h"
class Woodpecker :
	public Bird
{
public:
    int peckSpeed;

    Woodpecker();

    void Move();

    int CalculateBirdStrength();
};

