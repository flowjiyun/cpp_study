#pragma once
#include "Animal.h"
#include <string>

class Dog : public Animal
{
public:
    Dog(int age);

    std::string Bark() const;
};