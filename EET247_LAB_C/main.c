/*
+++++++++++++++++++++++++++++++++++++++++++++++++++| Version 7 |+++++++++++++++++++++++++++++++++++++++++++++++
| Program    : LAB C
| Created    : 02/13/2018
| Programmer : Matthew Keller
| Summary    : Find & Fix 4 Errors
| Credits    :
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
| Changelog  : Errors Fixed
|+| getchar(); (Add another getchar(); to keep program from closing)
|+| ()         (Missing () around 0)
|+| sum        (Missing m in sum)
|+| +          (Change * to + for proper logic)
|-| *
|+| ;          (Missing ; at end of 'int sum = 0')
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
#include <stdio.h>
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
    printf("Sum of entered number = %d\n",sum); // Error Missing m in sum
    getchar();
    getchar();
    return(0); // Error Missing () around 0
}