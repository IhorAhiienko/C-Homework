#include <iostream>
#include "Person.h"

Person:: Person()
{
}

Person:: ~Person()
{
}

void Person::show(){
    std::cout<<name<<": "<<byear<<"\n";
}

int Person::input(){
    std::cout<<"Name:";
    std::cin>>name;
    std::cout<<"Year:";
    std::cin>>byear;
    return 0;
}

