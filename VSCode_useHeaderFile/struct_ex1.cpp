/**
 * page 254 / 256
 *
 */

#include <iostream>
#include <string>

using std::string;
using std::cout;


// type-definition
struct Person               
{
    string name_;
    int alter_;
    string ort_;
};


// function separated
void print_person(Person p)       
{
    cout << p.name_ << " (" << p.alter_ << " aus " << p.ort_ << ") \n";
}


/* Example (p.256) - return value from own type */
Person construct (string name, int alter, string ort)
{
    // Person result {name, alter, ort};
    // return result;
    return {name, alter, ort};
}


int main()
{
    Person otto {"Lenchen", 31, "Mutters"};         // initialising (struct-version)
    print_person(otto);

    Person leer {};
    print_person(leer);
    cout << std::endl;



}
