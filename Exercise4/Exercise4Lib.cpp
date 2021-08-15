#include "Exercise4Lib.h"

// helper functions to get interger from user =======================================


// get integer input from user, redo if input not all integer
int get_int()
{
    string input{" "};
    bool int_yes {true};
    uint8_t sign_count {0};
    bool input_valid;
    do
    {
        // get input
        cin >> input;
        
        // set the variables to check for correct input
        // check for non interger related characters
        int_yes = {is_int(input)};
        // count the number of signs
        sign_count = {sign_counter(sign_count, input)};

        input_valid = {input_invald_int(int_yes, sign_count)};

        // error message if too many signs or non interger related characters
        if (input_valid)
        {
            cout << "integers please \n";
        }
    }
    while (input_valid);
 
    return stoi(input);
}

// check if a string is all integer
bool is_int(string input)
{
    for (auto &ch : input)
    {
        if (!isdigit(ch) && !ch_is_sign(ch))
        {
            return false;
        }
    }
    return true;
}

// final check to see if input is a valid number and it has correct number of + and - signs
bool input_invald_int (bool int_yes, uint8_t sign_count)
{
    if (!int_yes || sign_count > 1)
    {
        return true;
    }
    return false;
}

// find the greatest common divisor of two intergers
int find_gcd_int(int val1, int val2)
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
