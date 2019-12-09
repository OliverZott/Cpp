#ifndef EX1_STRUCT_H_INCLUDED
#define EX1_STRUCT_H_INCLUDED

#include <string>

using std::string;


struct Person
{
    string name_;
    int alter_;
    string ort_;
};

void drucke(Person p);

Person erzeuge(string name, int alter, string ort);


#endif // EX1_STRUCT_H_INCLUDED
