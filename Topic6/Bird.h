#pragma once
#include "Animal.h"
class Bird :
	public Animal
{
public:

    Bird();

    void Move();

protected:
    //Normally anything below here would be private, but we've left public for brevity
    int wingspan;
};

