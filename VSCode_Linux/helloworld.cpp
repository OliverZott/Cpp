#include <iostream>
#include <vector>
#include <string>

/**
 * Example how to use Cpp ind VS Code (Linux)
 * 
 * sources: 
 *  - https://code.visualstudio.com/docs/cpp/config-linux 
 *  - https://code.visualstudio.com/docs/editor/variables-reference
 * 
 * 
 * 1. create json build file for compiling
 *  - Terminal > Configure Default Build Task
 *  - choose C/C++: g++ build active file
 * 
 * 2. Open file
 *  - new bash terminal ("+")
 *  - cd /folder/path
 *  - ./filenamewithoutextension
 * 
 * 3. create json debug file (launch.json)
 *  - Run > Add Configuration... 
 *  - choose C++ (GDB/LLDB)
 *  - choose g++ build and debug active file
 * 
 * 
 */

using namespace std;


int main()  
{
    vector<string> msg {"Hello", "C++", "World", "fom", "VS Code", "and the c++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " "; 
    }
    cout << endl;
}
