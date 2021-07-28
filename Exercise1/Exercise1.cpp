/*
this program converts miles into kilometers
*/

#include <iostream>
#include "andy_lib.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
    cout << "enter the number of miles here: ";
    double miles {0};
    cin >> miles;

    // convert and print
    cout << "number of Kilometers: " << miles * 1.609 << "\n";

    Pause_Program();
    return 0;
}