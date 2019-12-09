/**
 * page 254 / 256
 *
 */

#include <iostream>
#include <string>

using std::string;
using std::cout;


struct Person               // type-definition
{
    string name_;
    int alter_;
    string ort_;
};

void drucke(Person p)       // function separated
{
    cout << p.name_ << " (" << p.alter_ << " aus " << p.ort_ << ") \n";
}


/* Examnple (p.256) - return value from own type */
Person erzeuge (string name, int alter, string ort)
{
    // Person result {name, alter, ort};
    // return result;
    return {name, alter, ort};
}
