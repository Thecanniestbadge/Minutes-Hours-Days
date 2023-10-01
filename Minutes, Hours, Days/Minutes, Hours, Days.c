// Programmer:		Thecanniestbadge
// Date:			6/05/2023
// Program Name:	Minutes, Hours, Days
// Description:		This program takes the users input and calculates the input into minutes, hours, days, if acceptable.
//					Their are steps involved that makes sure the input is valid and if not it shows a error message.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations
	// Constant Variables that are set to a number 
	const int SEC_MIN	= 60;
	const int SEC_HOUR	= 3600;
	const int SEC_DAY	= 86400;
	// Input Variable 
	int seconds		=0;
	// Calculation Variables
	double	minutes =0.0;
	double	hours	=0.0;
	double	days	=0.0; 
	// *** Your program goes here ***
	// *** INPUT ***
	// Ask for a user to input a random amount of seconds
	printf("Enter the number of seconds: ");
	scanf("%d", &seconds);
	// A if statment that gives an error message if the user enters anything less than 1
	if (seconds < 1) {
		printf("The number of seconds entered must be greater than 0.\n");
		printf("\n"); // Blank line
		return 0;
	}
	// A if statment that calculates and display if the input is 60 or higher
	if (seconds >= SEC_MIN) {
		minutes = (double)seconds / SEC_MIN;
		printf("The number of seconds you entered, %d, is %.2f minutes.\n", seconds, minutes);
	}
	// A if statment that calculates and display if the input is 3600 or higher
	if (seconds >= SEC_HOUR) {
		hours = (double)seconds / SEC_HOUR;
		printf("The number of seconds you entered, %d, is %.2f hours.\n", seconds, hours);
	}
	// A if statment that calculates and display if the input is 86400 or higher
	if (seconds >= SEC_DAY) {
		days = (double)seconds / SEC_DAY;
		printf("The number of seconds you entered, %d, is %.2f days.\n", seconds, days);
	}
	printf("\n"); // Blank line
	return 0;
} // end main()
