/**
 * Chapter 6 - higher data types
 *
 *
 *
 * @author Oliver Zott
 * @date 2019-12-06
 */

#include <iostream>
#include <string>

#include "ex1_pointers.h"
#include "ex2_string.h"
#include "ex3_streams.h"
#include "ex4_container.h"


int main()
{

    // pointer example (ex1_pointers)
    /*
    ptr_ex();
    */

    // String exmaple (ex2_string)
    /*
    std::string name;           // standard constructor: ( std::string name{} )
    unsigned gebJahr = 0;
    eingabe(name, gebJahr);
    */


    // String example (ex3_streams)
    /*
    std::string name2;
    std::array<int, 4> monthlyIncome;
    eingabe2(name2, monthlyIncome);
    */

    // Container example (ex4_container)
    array_ex4();

    Januar jan;
    initJanuar(jan);
    int sum = sumJanuar(jan);
    std::cout << sum ;
    printJanuar(jan);



    return 0;
}



