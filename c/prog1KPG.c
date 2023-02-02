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
    printf("\n");
}

void partTwo() {

}

void partThree() {

}
