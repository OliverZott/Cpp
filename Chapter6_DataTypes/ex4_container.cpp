/**
 * Chapter 6.1: Sequence Container
 * (page156)
 *
 * - array: fixed size
 * - vector: grows with items
 * - index / iterators (both)
 *
 *
 *
 *
 * @author Oliver Zott
 */

#include <array>
#include <iostream>

#include <algorithm>        // for "accumulate"
#include <numeric>          // for "iota"

using std::cout;
using std::array;
using std::string;
using std::endl;

using Januar = std::array<int, 31>;     // function2 (page158)


constexpr size_t TAGE = 7;      // good flavour: array size as constant !


// function1 (page 157)
void array_ex4()
{
    array<string, TAGE> weekday = {"Monday", "Tuesday", "Wednesday",
                            "Thursday", "Friday", "Saturday", "Sunday"};

    // output of array
    cout << "First day of the week: " << weekday[0] << ".\n";
    cout << "Last day of the week: " << weekday[6] << ".\n";

    // change array value
    weekday[5] = "Sonnabend";
    cout << weekday[5]  << endl;
}


// function2 (page 158)
void initJanuar(Januar jan)                     // using / typedef to avoid repetition
{
    std::iota(begin(jan), end(jan), 1);         // iota... linspace / begin, end ...iterator
}

int sumJanuar(const Januar jan)                 // exact array as parameter
{
    return std::accumulate(begin(jan), end(jan), 0);
}

void printJanuar(Januar jan)
{
    for (auto i = begin(jan); i <= end(jan); i++)
    std::cout << "Day " << i - jan.begin() << ", " << *i << std::endl;
}



