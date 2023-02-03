totalSeconds = input("Seconds: ") # define seconds variable and pull an int from the command line.
totalMinutes = totalSeconds//60
hours = totalSeconds//3600 # define hours variable (This gets rounded up)
minutes = totalMinutes-(hours*60) # subtract hours (in minutes) from total minutes
seconds = totalSeconds-(minutes*60)-(hours*3600) # subtract minutes and hours (in seconds) from total seconds

# Create a string to store the output
print("This is " + hours + " hours " + minutes + " minutes and " + seconds + " seconds.")
