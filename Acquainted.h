#ifndef UNIVERSITY_COURSE_C___ACQUAINTED_H
#define UNIVERSITY_COURSE_C___ACQUAINTED_H
#include <Person.h>


class Acquainted: public Person
{
    std::string phone;
public:
    Acquainted();
    Acquainted(const std::string& s, unsigned y,const std::string& ph):Person(s,y)
    {
        phone=ph;
    }
    ~Acquainted();
    //void show();
    int input();

    void setPhone(const std::string& ph){
        phone = ph;
    }

    std::string getPhone(){
        return phone;
    }

    std::string getName(){
        return name;
    }

};

#endif //UNIVERSITY_COURSE_C___ACQUAINTED_H
