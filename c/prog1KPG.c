#include <stdio.h>

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

    printf("Seconds: ");
    scanf("%d", &totalSeconds);

    int totalMinutes = totalSeconds/60;
    int hours = totalSeconds/3600; // define hours variable (This gets rounded up)
    int minutes = totalMinutes-(hours*60); // subtract hours (in minutes) from total minutes
    int seconds = totalSeconds-(minutes*60)-(hours*3600); // subtract minutes and hours (in seconds) from total seconds

    printf("\n" "This is %d hours %d minutes and %d seconds.", hours, minutes, seconds);
}

void partTwo() {
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

}
