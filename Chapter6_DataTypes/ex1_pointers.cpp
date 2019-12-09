/**
 * Pointer Example
 *
 * @author Oliver Zott
 * @date 2019-12-06
 */

#include <iostream>
#include <string>


int ptr_ex()
{
    int i = 7;
    int *ptr_i;
    ptr_i = &i;

    std::cout << "*ptr_i: " << *ptr_i << std::endl;
    std::cout << "ptr_i: " << ptr_i << std::endl;
    std::cout << "i: " << i << std::endl;
    std::cout << "&i: " << &i << std::endl;
    return 0;
}
