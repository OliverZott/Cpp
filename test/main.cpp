#include <iostream>
#include <array>


using namespace std;

void array_creation(array<int, 6> &in_arr)
{
    for (int i = 0; i < 6; i++)
     {
        in_arr[i] = i;
     }
}

int main()
{
    cout << "Array-Test: " << endl;

    array<int, 6> test_array;


    array_creation(test_array);



    for (int i = 0; i < 6; i++){
        cout << test_array[i] << endl;
    }

    return 0;
}
