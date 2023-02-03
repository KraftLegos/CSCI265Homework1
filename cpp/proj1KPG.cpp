//
// Created by kaleb.gilson on 2/3/2023.
//
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

    cout << "Dimes:";
    cin >> dimes;

    cout << "Nickles:";
    cin >> nickles;

    cout << "Pennies:";
    cin >> pennies;

    double total = 0; // Define the "total" variable

    // Multiply the amount of coins by the amount the coins are worth, add it to the total
    total+=(quarters*0.25);
    total+=(dimes*0.1);
    total+=(nickles*0.05);
    total+=(pennies*0.01);

    cout << fixed << setprecision(2) << "This is equal to " << total; // Print the output
}

void partThree() {

}
