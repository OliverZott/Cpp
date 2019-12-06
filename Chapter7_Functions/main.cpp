/*
 * Functions_MAIN.cpp
 *
 *  Created on: 09.07.2019
 *      Author: Dura
 */

#include <iostream>
#include <vector>

#include "CallByRefVal.h"
#include "FunctonbodyAndVectors.h"



int main() {

	// -----------------------------------------------------------------------------------------------
	/* Example 1: Call-By-Reference vs. Call-By-Value vs. constant variables  */
	std::cout << std::endl;
	std::cout << "========== Example1: Call-By-Value vs. Call-By-Reference ==========" << std::endl;

	int k = 78;

	std::cout << "--- Call-By-Value Version (NO Side-Effect) ---" << std::endl;
	print_val8(k);
	std::cout << "Current value of variable: " << k << std::endl;

	std::cout << std::endl;
	std::cout << "--- Call-By-Reference Version (Side-Effect) ---" << std::endl;

	print_val10(k);
	std::cout << "Current value of variable: " << k << std::endl;


	// -----------------------------------------------------------------------------------------------
	/* Example 2: Function Body with Vectors -> Calculates Prime numbers  */
    std::cout << std::endl;
    std::cout << "========== Example2: Functions with Vector ==========" << std::endl;

    int l = 18;
    calcPrimsTo ( l );


    std::cout << "Size of Prims-Vector: " <<  prims.size() << std::endl;

    std::cout << "Widergabe mittels Iteratoren: " << "\n";
    for (auto i = prims.begin(); i != prims.end(); ++i)                        // Widerabe mit ITERAOREN (better for containers!)  S.160
        std::cout << *i << ' ';
    std::cout << std::endl << std::endl;

    std::cout << "Widergabe mittels Bereichs-Schleife: " << "\n";
    for ( int index : prims)
        std::cout << index << ' ';
    std::cout << std::endl<< std::endl;


}

