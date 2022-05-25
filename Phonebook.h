#ifndef UNIVERSITY_COURSE_C___PHONEBOOK_H
#define UNIVERSITY_COURSE_C___PHONEBOOK_H
#include "Acquainted.h"
#include <cstdlib>

class Phonebook {
    size_t n;

    Acquainted records[100];

    char fname[255];

public:
    Phonebook();
    ~Phonebook();

    int addRecord(Acquainted& ref);
    std::string findByName(const std::string& name);
    int editPhone(const std::string& name,const std::string& ph);

};


#endif //UNIVERSITY_COURSE_C___PHONEBOOK_H
