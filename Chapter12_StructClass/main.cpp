/**
 * Example 1 - strcutrs & classes
 * (page 254 - ...)
 *
 * - struct
 * - functions separated
 *
 * @author Oliver Zott
 * @date 2019-12-07
 */

#include <iostream>
#include <string>

#include "ex1_struct.h"     // Person struct
#include "ex2_method.h"     // Person2 struct

using std::string;
using std::cout;


int main()
{
    Person otto {"Lenchen", 31, "Mutters"};         // initialicing
    drucke(otto);

    Person leer {};
    drucke(leer);

    Person2 olli {"Ollgu", 35, "Innsbruck"};        // member-function example
    olli.drucke();
    cout<< olli.gruss() << std::endl;;

    drucke(erzeuge("sigi", 3, "zwuguhausen"));


    return 0;
}
