/*
library for exercise 5
*/

#include "Exercise5Lib.h"

// takes input from the keyboard stream and adds valid decimal characters 
// to the output, which is a string pointer. 
bool get_decimal_str(string* output)
{
    bool has_decimal = false; // keep track of decimal point
    bool has_sign = false; // keep track of + or - signs

    for (char ch = getchar(); ch != '\n'; ch = getchar()) // for each character in the input string
    {
        if(input_valid(ch, &has_decimal, &has_sign))
        {
            // store character into string
            *output += ch;
        }
        else
        {
            return false; // false if input invalid    
        }
    }
    return true; // return true once all characters are added
}

bool input_valid(char ch, bool* has_decimal, bool* has_sign)
{
    return true;
}

bool check_sign(char ch)
{
    if (ch == '+' || ch == '-')
    {
        return true;
    }
    return false;
}

bool check_decimal_pt(char ch)
{
    if (ch == '.')
    {
        return true;
    }
    return false;
}

// print the larger and smaller number
void print_larger_smaller(double larger, double smaller)
{
    cout << "the larger number is: " << larger << "\n";
    cout << "the smaller number is: " << smaller << "\n";
}

