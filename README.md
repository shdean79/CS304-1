# CS304-1
Instructions and results: 
This project was created for my CS 231 course at JSU. It was my first project in C++ and is therefore very basic. The program was created for practice with the creation of variables and the use of mathematical operators, which in this case will perform calculations and produce results based on input received from the user. The program prompts the user to enter some number of pennies, nickels, dimes, quarters, half-dollar coins, and dollar coins. When the user is asked to enter the number of each type of coin, it is separate from the rest, i.e., “How many pennies do you have?” and the user enters the number of pennies before moving on to the number of nickels. Once the user has entered the total number of each coin individually, the program outputs the amount of each coin the user entered. The program then outputs the value of all the coins together in the form of dollars with change. 

Inclusions:
In this program, only the standard iostream library was included. This brings in the cin and cout functions. 

Variables:
As this was my first program exercise in C++, I was somewhat unfamiliar with how to properly set up variables in the simplest way. The variables were all declared only as soon as they were needed. The program outputs the message for how many coins you have, and the variables are all declared with these print messages. It is not a problem in this exercise, but the variables are all updated at the end of the program in a “hard-coded” manner, leaving no room for other possibilities without having to directly change them. The total variable is also declared only right before I call upon it. 

Functioning: 
When the code is compiled and ran, the user is prompted to enter some number of coins. It begins with pennies, working its way through each type of coin in the U.S. currency, and finishing on half-dollar and dollar coins. As the user inputs the number of each type of coin, the program adds the user input to a variable of an integer type assigned to each item. Each integer value is named according to the type of coin that corresponds with it (for example, “num_penny” is linked to the total number of pennies). After the user has input the total number of each type of coin, the program outputs the total quantity of each coin entered by the user in ascending order of coin value. Once the program has finished accepting input and has repeated the user input in the form of individualized coin values, it multiplies the input values by the coin’s real-world value. Pennies are skipped, as they are only worth one cent by themselves, so there is no need for any mathematical operator. Nickels are multiplied by 5, dimes by 10, quarters by 25, half dollars by 50, and dollars by 100. While this is not exactly the coins real world value (dimes are not worth five dollars), this potential mathematical error is solved in the final step. Once the program has performed the multiplication step on the number of each individual coin inputs, the individual coins are all combined into a new variable “total”. This new variable simply adds up all the values into one single variable for it to be easier to implement in future computations. After the total is calculated, the program outputs the value of all the coins by printing the value statement in dollars. The final step for the program is to take the total value and divide it by 100, as all the values were multiplied by whole numbers, which would have caused the number to be off by a few decimal places. This process leads to the result being printed in the corresponding value in dollars and cents. 

Overview: 
Seeing as how this was my first project in C++, I feel it was at least a decent implementation of my skills into a specific task. Although I could have done better in terms of where I placed my variables, as well as how I did the arithmetic. A function could have also been implemented to simplify my code in main, as well as having the ability to apply it to other programs that might require something like its arithmetic. When the program outputs the final message stating how much your coins are worth in dollars and cents total, unless you have a zero it prints fine. However, if you have some amount that leads to having an even ten cents ($4.50 for example), it only outputs the value in the tenths place. I would have to implement something to solve that slight problem in the future. 

A sample run of the program follows:

How many pennies do you have?
5
How many nickels do you have?
6
How many dimes do you have?
2
How many quarters do you have?
7
How many half-dollar coins do you have?
3
How many dollar coins do you have?
1
You have 5 pennies.
You have 6 nickels.
You have 2 dimes.
You have 7 quarters.
You have 3 half-dollar coins.
You have 1 dollar coins.

The value of all of your coins is: $4.8.
--------------------------------
Process exited after 8.389 seconds with return value 0
Press any key to continue . . .

