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
        partOne(); // Time
        partTwo(); // Coins
        partThree(); // Mailing Address
    }

    private static void partOne() {
        // Create the scanner object
        Scanner scanner = new Scanner(System.in);

        // Print the prompt to take input
        System.out.print("Seconds: ");

        int totalSeconds = scanner.nextInt(); // define seconds variable and pull an int from the command line.
        int totalMinutes = totalSeconds/60;
        int hours = totalSeconds/3600; // define hours variable (This gets rounded up)
        int minutes = totalMinutes-(hours*60); // subtract hours (in minutes) from total minutes
        int seconds = totalSeconds-(minutes*60)-(hours*3600); // subtract minutes and hours (in seconds) from total seconds

        // Create a string to store the output
        String output = "This is " + hours + " hours " + minutes + " minutes and " + seconds + " seconds.";

        // Output the final result
        System.out.println(output);
        System.out.println();
    }

    private static void partTwo() {
        // Create the scanner object
        Scanner scanner = new Scanner(System.in);

        // Print the prompt for input
        System.out.print("Quarters: ");
        int quarters = scanner.nextInt(); // Take an int from the scanner to the quarters variable
        // Repeat for all input

        System.out.print("Dimes: ");
        int dimes = scanner.nextInt();

        System.out.print("Nickles: ");
        int nickles = scanner.nextInt();

        System.out.print("Pennies: ");
        int pennies = scanner.nextInt();

        double total = 0; // Define the "total" variable

        // Multiply the amount of coins by the amount the coins are worth, add it to the total
        total+=(quarters*0.25);
        total+=(dimes*0.1);
        total+=(nickles*0.05);
        total+=(pennies*0.01);

        // Round to the second decimal place
        String totalString = String.format("%.2f", total);
        String output = "This is equal to $" + totalString; // Construct the output

        System.out.println(output); // Print the output
        System.out.println();
    }

    private static void partThree() {
        Scanner scanner = new Scanner(System.in);

        // Print the prompt for input
        System.out.print("First name: ");
        String firstName = scanner.nextLine(); // Take an int from the scanner to the quarters variable
        // Repeat for all input

        System.out.print("Last name: ");
        String lastName = scanner.nextLine();

        System.out.print("Address: ");
        String address = scanner.nextLine();

        System.out.print("City: ");
        String city = scanner.nextLine();

        System.out.print("State: ");
        String state = scanner.nextLine();

        System.out.print("Zip code: ");
        String zipCode = scanner.next();

        // Single print statement mailing address output
        System.out.println(firstName + " " + lastName + "\n" + address + "\n" + city + ", " + state + "  " + zipCode);

        // Six print statement mailing address output
        System.out.print(firstName + " ");
        System.out.println(lastName);
        System.out.println(address);
        System.out.print(city + ", ");
        System.out.print(state + "  ");
        System.out.println(zipCode);
    }
}