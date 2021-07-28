/*
this program takes user input of a number and tells user:
which one is larger or smaller
the sum
the difference
product
and ratio
*/

#include <iostream>
#include "exercise_4_lib.h"

using std::cout;
using std::cin;
using std::endl;

void print_larger_smaller (int larger, int smaller);
int find_GCD(int val1, int val2);


int main ()
{
    while (true)
    {
         // user input
        cout << "enter two intergers separated by spaces or press enter after each number: \n";
        int val1 = {0};
        int val2 = {0};
        val1 = {get_int()};
        val2 = {get_int()};
        
        // test print
        cout << val1 << " " << val2 << "\n";
        
        // find larger and smaller
        if (val1 > val2)
        {
            print_larger_smaller(val1, val2);
        }
        else if (val2 > val1)
        {
            print_larger_smaller(val2, val1);
        }
        else
        {
            cout << "both are of the same size.\n";
        }

        // find sum
        cout << "the sum of the two numbers is: " << val1 + val2 << "\n";

        // find difference
        cout << "the difference between the two numbers is: " << val1 - val2 << "\n";

        // find product
        cout << "the product of the two values is: " << val1 * val2 << "\n";
        
        // find the ratio
        int GCD = find_GCD(val1, val2);
        cout << "ratio: " << val1 / GCD << " : " << val2 / GCD << "\n";
    
    }
}

void print_larger_smaller (int larger, int smaller)
{
    cout << "the larger number is: " << larger << "\n";
    cout << "the smaller number is: " << smaller << "\n";
}