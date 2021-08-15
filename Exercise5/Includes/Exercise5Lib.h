#include "..\..\Ch3Lib\AndyLib.h"

// struct for decimal string
struct dec_string
{
    string str = "";
    int dec_index = 0;
};


// functions from Exercise5Lib
bool get_decimal_str(string* output);
bool check_sign(char ch);
bool check_decimal_pt(char ch);
void print_larger_smaller(double larger, double smaller);
bool ch_valid(char ch, bool* has_decimal, bool* has_sign);
string decimal_input_loop();