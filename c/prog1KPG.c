/**
 * C portion of Project1
 * CSCI 265
 * Kaleb Gilson - kaleb.gilson@und.edu - 1/26/23
 */

#include <stdio.h>
#include <string.h>

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
    fflush(stdin); //Flushes input/output buffer
    int totalSeconds;

    printf("Seconds:");
    scanf("%d", &totalSeconds);

    int totalMinutes = totalSeconds/60;
    int hours = totalSeconds/3600; // define hours variable (This gets rounded up)
    int minutes = totalMinutes-(hours*60); // subtract hours (in minutes) from total minutes
    int seconds = totalSeconds-(minutes*60)-(hours*3600); // subtract minutes and hours (in seconds) from total seconds

    printf("This is %d hours %d minutes and %d seconds.", hours, minutes, seconds);
}

void partTwo() {
    fflush(stdin);
    int quarters, dimes, nickles, pennies;

    printf("\n\nQuarters:");
    scanf("%d", &quarters);

    printf("Dimes:");
    scanf("%d", &dimes);

    printf("Nickles:");
    scanf("%d", &nickles);

    printf("Pennies:");
    scanf("%d", &pennies);

    double total = 0; // Define the "total" variable

    // Multiply the amount of coins by the amount the coins are worth, add it to the total
    total+=(quarters*0.25);
    total+=(dimes*0.1);
    total+=(nickles*0.05);
    total+=(pennies*0.01);

    printf("This is equal to $%.2f", total); // Print the output
}

void partThree() {
    fflush(stdin);
    char firstName[50], lastName[50], address[100], city[50], state[11], zipCode[11];

    // Print the prompt for input
    printf("\n\nFirst name:");
    fgets(firstName, 49, stdin); // Take an int from the scanner to the quarters variable
    firstName[strcspn (firstName, "[\r\n]")] = 0; //Remove \r and \n from the string
    // Repeat for all input

    printf("Last name:");
    fgets(lastName, 49, stdin);
    lastName[strcspn (lastName, "[\r\n]")] = 0;

    printf("Address:");
    fgets(address, 100, stdin);
    address[strcspn (address, "[\r\n]")] = 0;

    printf("City:");
    fgets(city, 49, stdin);
    city[strcspn (city, "[\r\n]")] = 0;

    printf("State:");
    fgets(state, 10, stdin);
    state[strcspn (state, "[\r\n]")] = 0;

    printf("Zip code:");
    fgets(zipCode, 10, stdin);
    zipCode[strcspn (zipCode, "[\r\n]")] = 0;

    // Single print statement mailing address output
    printf("\n%s %s\n%s\n%s, %s  %s", firstName, lastName, address, city, state, zipCode);

    // Six print statement mailing address output
    printf("\n%s", firstName);
    printf(" %s", lastName);
    printf("\n%s", address);
    printf("\n%s", city);
    printf(", %s", state);
    printf("  %s", zipCode);
}
