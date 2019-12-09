/**
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */

#include <array>
#include <iostream>

using std::cout;
using std::array;
using std::string;

void array_ex()
{
    array<string, 7> weekday = {"Monday", "Tuesday", "Wednesday"
                            "Thursday", "Friday", "Saturday", "Sunday"};

    // output of array
    cout << "First day of the week: " << weekday[0] << ".\n";
    cout << "Last day of the week: " << weekday[6] << ".\n";

    // change array value
    weekday[5] = "Sonnabend";
}
