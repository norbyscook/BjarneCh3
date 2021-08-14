/*
library for exercise 5
has a decimal input checker
*/

#include "Exercise5Lib.h"
// helper functions to get decimal from user =======================================

// count the number of decimal points within a string
uint8_t decimal_counter(uint8_t decimal_count, string input)
{
    for (auto &ch : input)
    {
        if (ch == '.')
        {
            decimal_count++;
        }
    }

    return decimal_count;
}

bool invalid_decimal_input (bool is_decimal, uint8_t sign_count, uint8_t decimal_count)
{
    if (!is_decimal || sign_count > 1 || decimal_count > 1)
    {
        return true;
    }
    return false;
}

// check if string has character that are not numbers or decimals
bool decimal_check(string input)
{
    for (auto &ch : input)
    {
        if (!isdigit(ch) && !ch_is_sign(ch) && ch != '.')
        {
            return false;
        }
    }
    return true;
}

// checks to see if a string entered is a decimal string
double get_decimal()
{
    string input{" "};
    bool is_decimal {true};
    uint8_t sign_count {0};
    uint8_t decimal_count {0};
    bool input_invalid {false};
    do
    {
        // get input
        cin >> input;
        
        // reset counts:
        sign_count = {0};
        decimal_count = {0};
        
        // set the variables to check for correct input
        // check for non decimal related characters
        is_decimal = {decimal_check(input)};
        // count the number of signs
        sign_count = {sign_counter(sign_count, input)};
        // count the number of decimals
        decimal_count = {decimal_counter(decimal_count, input)};

        // determine if input is valid based on criteria defined inside the function
        input_invalid = {invalid_decimal_input(is_decimal, sign_count, decimal_count)};

        // error message if too many decimals or signs or non interger related characters
        if (input_invalid)
        {
            cout << "integers please \n";
        }
    }
    while (input_invalid);
    double result = stod(input);
    return result;
}

// function to find the GCD of two doubles
double find_gcd_double(double dec1, double dec2)
{
    if (dec1 < dec2)
    {
        // switch places if dec1 is smaller than dec2 
        // as dec1 has to be larger than dec2
        double old_dec2 = dec2;
        dec2 = dec1;
        dec1 = old_dec2;
    }
    while(dec2 > 0)
    {
        double old_dec2 = dec2;
        dec2 = remainder(dec1, dec2);
        dec1 = old_dec2;
    }
    return dec1;
}
