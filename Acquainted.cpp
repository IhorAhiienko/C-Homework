#include <iostream>
#include "Acquainted.h"

Acquainted::Acquainted()
{
}

Acquainted::~Acquainted()
{
}

int Acquainted::input(){
    Person::input();
    std::cout<<"Phone:";
    std::cin>>phone;
    return 0;
}