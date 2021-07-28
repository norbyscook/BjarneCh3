/*
this program is to test out illegal variable names
*/

#include <iostream>
#include "andy_lib.h"

using std::cout;
using std::cin;
using std::endl;


int main ()
{
    double decimal {1.344};
    int number {decimal};
    cout << number << "\n";

    Pause_Program();
    return 0;
}