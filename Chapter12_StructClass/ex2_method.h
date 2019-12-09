#ifndef EX2_METHOD_H_INCLUDED
#define EX2_METHOD_H_INCLUDED

#include <string>

using std::string;


struct Person2
{
    string name_;
    int alter_;
    string ort_;

    void drucke();
    string gruss();
};


void drucke();


#endif // EX2_METHOD_H_INCLUDED
