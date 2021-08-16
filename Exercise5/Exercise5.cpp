/*
this program takes user input of a decimal number and tells user:
which one is larger or smaller
the sum
the difference
product
and ratio
*/

#include ".\\Includes\\Exercise5Lib.h"

int main()
{
    while (true)
    {
         // user input
        cout << "enter two decimals separated by spaces or press enter after each number: \n";
        
        // dec_string to store decimals as string
        dec_string dec_str1; 
        dec_string dec_str2; 
        
        dec_str1.str = decimal_input_loop();
        dec_str2.str = decimal_input_loop();
        
        // test print
        cout << dec_str1.str << "\n";
        cout << dec_str2.str << "\n";

        // conver to double 
        double val1 = stod(dec_str1.str);
        double val2 = 0.0;
        
        // test print
        cout << val1 << " " << val2 << "\n";

        // find and print larger and smaller
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
    }
}
