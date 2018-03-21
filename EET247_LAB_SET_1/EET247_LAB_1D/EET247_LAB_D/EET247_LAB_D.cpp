/*
								   =============================================
								   |		  Pittsburg State University	   |
								   |		   Programming Assignments		   |
								   | EET247 Programming for Electronic Devices |
								   =============================================
											
+++++++++++++++++++++++++++++++++++++++++++++++++++| Version 1 |+++++++++++++++++++++++++++++++++++++++++++++++
| Problem Set 1 : Introduction to Computer Programming
| Assigment     : EET247_LAB_1D		
| Created		: 02/14/2018
| Programmer	: Matthew Keller
| Summary		: 
| Credits		: 
+++++++++++++++++++++++++++++++++++++++++++++++++++| Objective |+++++++++++++++++++++++++++++++++++++++++++++++
| Using your textbook, notes and personal research material, write a programusing the C Programming language
| that will display the desired output on the command screen per the specifications provided.
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

++++++++++++++++++++++++++++++++++++++++++++++++| Specifications |+++++++++++++++++++++++++++++++++++++++++++++
| Input   : 2 Integers from keyboard
| Process : Clear the display screenand perform the required math processes on the inputs
| Output  : The screen should displaythe following items per the exhibit below
|			- The sum of two integers 
|			- The difference between two integers
|			- The product of two integers
|			- The result of integer 1 divided by integer 2 given in the form of an integer  
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


+++++++++++++++++++++++++++++++++++++++++++++++++++++| Notes |+++++++++++++++++++++++++++++++++++++++++++++++++
| Integer division		   : Divide by zero : Unhandled exception at 0x01211475 in EET247_LAB_D.exe: 0xC0000094
| Integer division 		   : Doesn't round up or down	
| Integer decimals		   : Causes Error
| Integer fractions		   : Causes Error
| Many other errors can be caused
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

+++++++++++++++++++++++++++++++++++++++++++++++++++| Changelog |+++++++++++++++++++++++++++++++++++++++++++++++
| +
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n1, n2, addition, subtraction, multiplication, division, remainder;
    //int n2;
	//int addition = 0;
	//int subtraction = 0;
	//int multiplication = 0;
	//int division = 0;
	//int remainder // r;

    printf("Enter First and Second Number to be Added, Subtracted, Multiplied and Divided Simutaniously\n\n");
    printf("Enter First Number  : "); scanf("%d",&n1);
    printf("Enter Second Number : "); scanf("%d",&n2);
	system("cls");

	
	multiplication = n1 * n2;
	division = n1 / n2;
	addition = n1 + n2; 
	subtraction = n1 - n2, remainder = n1 % n2;

	// Number Output
	printf(" %d * %d = %d\n", n1, n2, multiplication);
	if (n1 % n2 == 0)
		printf(" %d / %d = %d\n", n1, n2, division);
	else
		printf(" %d / %d = %dr%d\n", n1, n2, division, remainder);
	printf(" %d + %d = %d\n", n1, n2, addition);
	printf(" %d - %d = %d\n\n", n1, n2, subtraction);

	// Text Output
	printf("The Product of %d and %d is     : %d\n", n1, n2, multiplication);
	if (n1 % n2 == 0)
		printf("The Division of %d and %d is    : %d\n", n1, n2, division);
	else
		printf("The Division of %d and %d is    : %d with a remainder of %d\n", n1, n2, division, remainder);
	printf("The Sum of %d and %d is         : %d\n", n1, n2, addition);
	printf("The Difference of %d and %d is  : %d\n\n", n1, n2, subtraction);
	system("pause");
    return(0); 
}