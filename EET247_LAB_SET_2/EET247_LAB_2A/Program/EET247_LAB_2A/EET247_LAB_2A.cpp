/*
								   =============================================
								   |	  	  Pittsburg State University	   |
								   |		   Programming Assignments		   |
								   | EET247 Programming for Electronic Devices |
								   =============================================
											
+++++++++++++++++++++++++++++++++++++++++++++++++++| Version 1 |+++++++++++++++++++++++++++++++++++++++++++++++
| Problem Set 1 : Introduction to Computer Programming
| Assigment     : EET247_LAB_2A
| Name			: Polar to Rectangular
| Created		: 03/06/2018
| Programmer	: Matthew Keller
| Summary		: 
| Credits		: 
+++++++++++++++++++++++++++++++++++++++++++++++++++| Objective |+++++++++++++++++++++++++++++++++++++++++++++++
| Using your textbook, notes and personal research material, write a programusing the C Programming language
| that will display the desired output on the command screen per the specifications provided.
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

++++++++++++++++++++++++++++++++++++++++++++++++| Specifications |+++++++++++++++++++++++++++++++++++++++++++++
| Input   : 2 numbers from keyboard
| Process : Prompt for inputs,perform the required math processes, display output
| Output  : The screen should displaythe following items per the exhibit below
|			- Enter a magnitude
|			- Enter the angle in degrees
|			- The real part is:
|			- The imaginary part is:   
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

+++++++++++++++++++++++++++++++++++++++++++++++++++++| Notes |+++++++++++++++++++++++++++++++++++++++++++++++++
| real=magnitude*cos(angle);      | Wrong output because angle is in degrees and not in radians
| imaginary=magnitude*sin(angle); |	Wrong output because angle is in degrees and not in radians
| radians=((angle*pi)/180))		  | Equation to convert degrees to radians
| checked answers with polar to rectangular online calculator
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

+++++++++++++++++++++++++++++++++++++++++++++++++++| Changelog |+++++++++++++++++++++++++++++++++++++++++++++++
|
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
#include<stdio.h>
#include<math.h> /*Needed for cos and sin*/
#include<stdlib.h> /*Needed for system("pause");*/
#define pi 3.14159265358979323846264338327950288 /*Needed to set value of pi*/

int main()
{
    double real, imaginary, magnitude, angle;
	printf("\nPolar to Rectangular Calculator\n\n");
    printf(" Enter the magnitude/radius : "); scanf("%lf",&magnitude);
    printf(" Enter the angle in degrees : "); scanf("%lf",&angle);
    real=(magnitude*(cos((angle*pi)/180)));
    imaginary=(magnitude*(sin((angle*pi)/180)));
    printf("\n The real part is        : %.6lf",real);
    printf("\n The imaginery part is   : %.6lfi",imaginary);
	printf("\n The rectangular form is : %.6lf + %.6lfi \n\n",real,imaginary);
    system("pause");
}