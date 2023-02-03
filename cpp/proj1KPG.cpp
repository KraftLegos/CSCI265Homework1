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

}

void partThree() {

}
