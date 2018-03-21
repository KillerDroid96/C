/*
+++++++++++++++++++++++++++++++++++++++++++++++++++| Version 1 |+++++++++++++++++++++++++++++++++++++++++++++++
| Program    : LAB C
| Created    : 02/13/2018
| Programmer : Matthew Keller
| Summary    :
| Credits    :
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
| Changelog  : Errors Fixed
|+| system("pause"); (Add another stdlib and system("pause") to keep program from closing)
|+| ()               (Missing () around 0)
|+| sum				 (Missing m in sum)
|+| +				 (Change * to + for proper logic)
|-| *			     (Removed Multplication) 
|+| ;				 (Missing ; at end of 'int sum = 0')
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n1;
    int n2;
    int sum = 0; // Error Missing ;
    printf("Enter an integer\n");
    scanf("%d",&n1);
    printf("Enter a second integer\n");
    scanf("%d",&n2);
    sum = n1 + n2; // Error * not +
    printf("Sum of entered numbers is = %d\n",sum); // Error Missing m in sum
	system("pause");
    return(0); // Error Missing () around 0
}