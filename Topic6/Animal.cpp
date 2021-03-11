#include "Animal.h"
#include <iostream>
using namespace std;

Animal::Animal()
{
	age = 0;
	weight = 0;
}

void Animal::Move()
{
	cout << "animal movement" << endl;
}
