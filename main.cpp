// Time Conversion Program
// Harold (Harry) Noland II
// any example usage or helpful commandline arguments go here

#include <iostream>
// Add any other header files here
using namespace std;
#include <string>

///////////////////////////////////////
int main()
{
    // Work here
    cout << "***********************************************************" << endl;
    cout << "*Welcome to my first program: The Time Conversion Program.*" << endl;
    cout << "Convert a number into the number of hours, minutes, and seconds." << endl;
    cout << "***********************************************************"
    int input;
    int hours;
    int minutes;
    int seconds;
    cout << "Please enter a number:" << endl;
    cin >> input;
    hours = input % 24
    minutes = input % (24 * 60)
    seconds = input % (24 * 60 * 60)
    cout << "The number of hours in the number is: " << hours;
    cout << "The number of minutes in the number is: " << minutes;
    cout << "The number of seconds in the number is: " << seconds;
}

// Place any unused code here so that the instructor can follow your prblem solving thoughts.
