/*
library for exercise 5
*/

#include "Exercise5Lib.h"

// return a string of decimal characters, otherwise keep asking for input.
string decimal_input_loop()
{
    string output = "";

    while (!get_decimal_str(&output)) // while input is invalid
    {
        // keep asking user for input string
        cout << "decimals only" << endl;
    }
    return output;
}

// pointer to the string output, bool for succees of fail
bool get_decimal_str(string* output)
{
    bool has_decimal = false; // keep track of decimal point
    bool has_sign = false; // keep track of + or - signs

    for (char ch = getchar(); ch != EOF; ch = getchar()) // for each character in the input string
    {
        if(ch_valid(ch, &has_decimal, &has_sign))
        {
            // store character into string
            *output += ch;
        }
        else if (ch == '\n' || ch == ' ')
        {
            return true; // return true if new line is encountered
        }
        else
        {
            fflush(stdin); // clear the stream
            *output = ""; // reset string
            return false; // false if input invalid    
        }
    }
    return true; // return true once all characters are added
}

// return true if contains only decimal characters
bool ch_valid(char ch, bool* has_decimal, bool* has_sign)
{
    if (isdigit(ch))
    {
        return true;
    }
    else if (ch == '.' && !(*has_decimal)) // character is the only decimal point
    {
        *has_decimal = true;
        return true;
    }
    else if (ch == '+' || ch == '-' && !(*has_sign)) // character is the only sign
    {
        *has_sign = true;
        return true;
    }
    else
    {
        return false;
    }
}


// print the larger and smaller number
void print_larger_smaller(double larger, double smaller)
{
    cout << "the larger number is: " << larger << "\n";
    cout << "the smaller number is: " << smaller << "\n";
}

