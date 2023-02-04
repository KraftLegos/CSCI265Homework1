/**
 * C++ portion of Project1
 * CSCI 265
 * Kaleb Gilson - kaleb.gilson@und.edu - 1/26/23
 */
#include <iostream>
#include <iomanip>

using namespace std;

void partOne();

void partTwo();

void partThree();

int main() {
    partOne();
    partTwo();
    partThree();
    return 0;
}

void partOne() {
    int totalSeconds;

    cout << "Seconds:";
    cin >> totalSeconds;

    int totalMinutes = totalSeconds/60;
    int hours = totalSeconds/3600; // define hours variable (This gets rounded up)
    int minutes = totalMinutes-(hours*60); // subtract hours (in minutes) from total minutes
    int seconds = totalSeconds-(minutes*60)-(hours*3600); // subtract minutes and hours (in seconds) from total seconds

    cout<<"This is " << hours << " hours " << minutes << " minutes and " << seconds << " seconds.";
    cin.ignore(256, '\n');
}

void partTwo() {
    int quarters, dimes, nickles, pennies;

    cout << "\n\nQuarters:";
    cin >> quarters;
    cin.ignore(256, '\n');

    cout << "Dimes:";
    cin >> dimes;
    cin.ignore(256, '\n');

    cout << "Nickles:";
    cin >> nickles;
    cin.ignore(256, '\n');

    cout << "Pennies:";
    cin >> pennies;
    cin.ignore(256, '\n');

    double total = 0; // Define the "total" variable

    // Multiply the amount of coins by the amount the coins are worth, add it to the total
    total+=(quarters*0.25);
    total+=(dimes*0.1);
    total+=(nickles*0.05);
    total+=(pennies*0.01);

    cout << fixed << setprecision(2) << "This is equal to " << total; // Print the output
}

void partThree() {
    string firstName, lastName, address, city, state, zipCode;

    // Print the prompt for input
    cout << "\n\nFirst name:";
    getline(cin, firstName); // Take an int from the scanner to the quarters variable;
    // Remove \r and \n from the string
    // Repeat for all input

    cout << "Last name:";
    getline(cin, lastName);

    cout << "Address:";
    getline(cin, address);

    cout << "City:";
    getline(cin, city);

    cout << "State:";
    getline(cin, state);

    cout << "Zip code:";
    getline(cin, zipCode);
    // Single print statement mailing address output
    cout << "\n" << firstName << " " << lastName <<
         "\n" << address <<
         "\n" << city << ", " << state << "  " << zipCode;

    // Six print statement mailing address output
    cout << "\n" << firstName;
    cout << " " << lastName;
    cout << "\n" << address;
    cout <<"\n" << city;
    cout << ", " << state;
    cout << "  " << zipCode;
}
