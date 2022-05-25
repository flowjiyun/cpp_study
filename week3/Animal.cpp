#include "Animal.h"

Animal::Animal()
    : mAge(0)
{
}

Animal::Animal(int age)
    : mAge(age)
{
}

int Animal::GetAge() const
{
    return mAge;
}