#include "..\..\Ch3Lib\AndyLib.h"

// struct for decimal string
struct dec_string
{
    string str = ""; // the decimal string
    int dec_index = 0; // index of the decimal 
};


// functions from Exercise5Lib
bool get_decimal_str(string* output);
void print_larger_smaller(double larger, double smaller);
bool ch_valid(char ch, bool* has_decimal, bool* has_sign);
string decimal_input_loop();