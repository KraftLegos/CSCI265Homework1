package src;

import java.util.Scanner;

/**
 * Java portion of Project1
 * CSCI 265
 * Kaleb Gilson - kaleb.gilson@und.edu - 1/26/23
 */
public class proj1KPG {

    /**
     * Main method
     * @param args arguments from the command line
     */
    public static void main(String[] args) {
        // Create the scanner object
        Scanner scanner = new Scanner(System.in);

        // Print the prompt to take input
        System.out.println("Please enter amount of seconds: ");

        int hours = 0; // define hours variable
        int minutes = 0; // define minutes variable
        int seconds = scanner.nextInt(); // define seconds variable and pull an int from the command line.

        // Creates a loop that removes 60 seconds and adds 1 minute until seconds is less than 60
        while (seconds > 60) {
            minutes++;
            seconds-=60;
        }

        // Creates a loop that removes 60 minutes and adds 1 hour until minutes is less than 60
        while (minutes > 60) {
            hours++;
            minutes-=60;
        }

        // Create a string with a check to remove the "s" character when there is only one hour, minute, or second.
        String secondsWord = seconds==1 ? "second" : "seconds";
        String minutesWord = minutes==1 ? "minute" : "minutes";
        String hoursWord = hours==1 ? "hour" : "hours";

        // Create a string to store the output
        String output = "This is " + hours + " " + hoursWord + " " + minutes + " " + minutesWord + " and " + seconds + " " + secondsWord + ".";

        // Output the final result
        System.out.println(output);
    }
}