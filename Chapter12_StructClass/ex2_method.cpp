/**
 * page 258
 *
 */

#include <iostream>
#include <string>

using std::string;
using std::cout;


struct Person2              // type-definition
{
    string name_;
    int alter_;
    string ort_;

    void drucke();          //function as method
    string gruss();
};

void Person2::drucke()       // function separated
{
    cout << name_ << " (" << alter_ << " aus " << ort_ << ") \n";       // p.  ...not necessary in method
}

string Person2::gruss()
{
    return "Hallo " + this->name_ + " aus " + ort_;      // this is basically the same (referes to current instance)
}
