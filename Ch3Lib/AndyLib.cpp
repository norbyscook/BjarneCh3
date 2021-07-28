/*
andy libiary that has functions for counting signs used for checking if inputs are numerical or not.
also has a pause program function. 
*/

#include "AndyLib.h"

// pause the program until user inputs something
void Pause_Program ()
{
    cout << "enter something to end program\n";
    bool end_pause {true};  
    cin >> end_pause;
}

// find the greatest common divisor 
int find_GCD(int val1, int val2)
{
    // make all positive
    val1 = {abs(val1)};
    val2 = {abs(val2)};
    int old_val2 = {val2};
    while (val2 > 0)
    {
        old_val2 = {val2};
        val2 = val1 % val2;
        val1 = old_val2;
    }
    return val1;
}


// decide if a character is - or + symbol
bool ch_is_sign (char ch)
{
    if (ch == '+' || ch == '-')
    {
        return true;
    }

    return false;
}

// helper functions for counting the plus and minus signs of numbers
uint8_t sign_counter(uint8_t sign_count, string input)
{
    for (auto &ch : input)
    {
        if (ch_is_sign(ch))
        {
            sign_count++;
        }
    }

    return sign_count;
}
