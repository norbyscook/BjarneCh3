/*
this program takes user input of a number and tells user:
which one is larger or smaller
the sum
the difference
product
and ratio
*/

#include ".\\Includes\\Exercise5Lib.h"

void print_larger_smaller(double larger, double smaller);

int main()
{
    while (true)
    {
         // user input
        cout << "enter two decimals separated by spaces or press enter after each number: \n";
        
        string decimal_str = ""; // string to store decimal
        char* decimal_point = NULL; // pointer to the decimal point of the decimal string 
        char* input_end = NULL; // pointer to the end of the decimal string
        bool input_valid = false; // to help check if input is valid
        bool has_decimal = false; // keep track of decimal point
        bool has_sign = false; // keep track of + or - signs
        do
        {
            // keep asking user for input string
            input_valid = get_decimal_str(&decimal_str);
            // place pointer
        } while (input_valid == false); // while input is invalid
        

        double val1 = 0.0;
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

void print_larger_smaller(double larger, double smaller)
{
    cout << "the larger number is: " << larger << "\n";
    cout << "the smaller number is: " << smaller << "\n";
}


