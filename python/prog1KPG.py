def part1():
    total_seconds = int(input("Seconds: "))  # define seconds variable and pull an int from the command line.
    total_minutes = total_seconds // 60
    hours = total_seconds // 3600  # define hours variable (This gets rounded up)
    minutes = total_minutes - (hours * 60)  # subtract hours (in minutes) from total minutes
    seconds = total_seconds - (minutes * 60) - (hours * 3600)  # subtract minutes and hours (in seconds) from total seconds

    # Create a string to store the output
    print("This is " + str(hours) + " hours " + str(minutes) + " minutes and " + str(seconds) + " seconds.")


def part2():
    quarters = int(input("\nQuarters: "))  # Take an int from the scanner to the quarters variable
    # Repeat for all input

    dimes = int(input("Dimes: "))
    nickles = int(input("Nickles: "))
    pennies = int(input("Pennies: "))

    total = 0  # Define the "total" variable

    # Multiply the amount of coins by the amount the coins are worth, add it to the total
    total += (quarters * 0.25)
    total += (dimes * 0.1)
    total += (nickles * 0.05)
    total += (pennies * 0.01)

    # Round to the second decimal place
    round(total, 2)
    print("This is equal to $" + str(round(total, 2)))


def part3():
    first_name = input("\nFirst name: ")
    last_name = input("Last name: ")
    address = input("Address: ")
    city = input("City: ")
    state = input("State: ")
    zip_code = input("Zip Code: ")

    print(first_name + " " + last_name + "\n" + address + "\n" + city + ", " + state + "  " + zip_code)

    print(first_name + " ", end='')
    print(last_name, end='')
    print("\n" + address, end='')
    print("\n" + city + ", ", end='')
    print(state + "  ", end='')
    print(zip_code, end='')


part1()
part2()
part3()
