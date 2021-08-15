/*
andy libiary that has functions for counting signs used for checking if inputs are numerical or not.
also has a pause program function. 
and a function to find the GDC of intergers
*/

#include "AndyLib.h"

// pause the program until user inputs something
void Pause_Program ()
{
    cout << "enter something to end program\n";
    bool end_pause {true};  
    cin >> end_pause;
}
