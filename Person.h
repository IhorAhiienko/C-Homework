#ifndef UNIVERSITY_COURSE_C___MAIN16_H
#define UNIVERSITY_COURSE_C___MAIN16_H

#include <string>

class Person{
    std::string name;
    unsigned byear;
public:
    Person();
    Person(std::string s, unsigned y):name(s),byear(y){}
    ~Person();

    void show();
    int input();

    std::string getName(){
        return name;
    }
};


#endif //UNIVERSITY_COURSE_C___MAIN16_H
