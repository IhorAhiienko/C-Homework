//16
#include <iostream>
#include "Phonebook.h"

int main(int argc,char **argv)
{
    Phonebook pb;

    size_t n;
    std::cout<<"N=";
    std::cin>>n;
    Acquainted aq;
    for(size_t i=0;i<n;i++){
        aq.input();
        pb.addRecord(aq);
    }

    std::string nom;
    std::cout<<"Name to find:";
    std::cin>>nom;

    std::cout<<"Tel is:"<<pb.findByName(nom)<<"\n";

    return 0;
}