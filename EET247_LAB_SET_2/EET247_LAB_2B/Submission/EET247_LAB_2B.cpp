/*													
=============================================
|		  Pittsburg State University	    |
|		   Programming Assignments		    |
| EET247 Programming for Electronic Devices |
=============================================
| Assigment     : EET247_LAB_2B	            |	
| Created		: 03/20/2018                |
| Programmer	: Matthew Keller            |
=============================================

===============
| DESCRIPTION |
===============
Loan Amortization Calculator

=============						
| OBJECTIVE |
=============
Contain at Least 1 Function
Relevant Dollar and Percent Signs
Two Decimal Points

==================
| SPECIFICATIONS |						
==================						
Input   : From keyboard: Purchase Price, Down payment, Annual Interest Rate and Number of Payments 
Process : Perform the required math processes on the inputsper the following information
Output  : Name, Purchase Price, Down payment, Principle Borrowed, Number of Payments, Annual Interest Rate, Monthly Payment, Total Repayment, Total Intrest

=========
| NOTES |
=========
PP = Purchase Price = $(Given)
DP = Down Payment = $(Given)
PB = P = Principle Borrowed = (PP - DP)
AIRP = Annual Interest Rate Percent = %(Given)
AIRD = Annual Interest Rate Decimal = (AIRP / 100)
PWR = Power ^
MIRD = i = Monthly Interest Rate Decimal = ((1 / 12 (AIRD)) 
MIRP = i = Monthly Interest Rate Percent = (MIRD * 100) 

TOP = (MIRD * PB)
BTM = ((1 - (1 + MIR))^-24
MP = Monthly Payment = (TOP / BTM)
NOP = Number of Payments = #(Given)
TR = Total Repayment = (MP * NOP)
TI = Total Interest = (TR - PB)

error C2086: 'double PB' : redefinition 
	*fix: (Changed PB to P)
-1.#IND00 Caused by using a fraction
	*fix: For 1/12 use 0.0833333333333333333333333333333333333333333333
Debugging:
	printf("%lf\n", AIRD);
	printf("%lf\n", P);
	printf("%lf\n", MIRD);
	printf("%lf\n", TOP);
	printf("%lf\n", BTM);
	printf("%lf\n", MP);
	printf("%lf\n", TR);
	printf("%lf\n", TI);
	printf("%lf\n", MIRP);
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	/* GIVEN */
	double PP, DP, AIRP, NOP;

	/* CALCULATED */
	double AIRD, P, MIRD, MIRP, TOP, BTM, MP, TR, TI, PWR;

	/* INPUT */
	printf("Enter Purchace Price: $"); scanf("%lf",&PP);
	printf("Enter Down Pament: $"); scanf("%lf",&DP);
	printf("Enter Annual Intrest Rate: "); printf("%%"); scanf("%lf",&AIRP); 
	printf("Enter Number of Payments: "); scanf("%lf",&NOP);
	system("cls");

	/* FUNCTIONS */
	AIRD = (AIRP / 100); 
	P = (PP - DP); 
	MIRD = (0.0833333333333333333333333333333333333333333333) * (AIRD); 
	TOP = (MIRD * P);
	PWR = pow(1 + MIRD, -NOP);
	BTM = (PWR - 1);
	MP = (TOP / -BTM);
	TR = (MP * NOP);
	TI = (TR - P);
	MIRP = (MIRD * 100); 
	
	/* OUTPUT */
	printf("==========================================\n");
	printf("       Loan Amortization Calculator       \n");
	printf("==========================================\n");
	printf("Borower Name:          Matthew Keller\n");
	printf("Purchace Price:        $%.2lf\n", PP);
	printf("Down Payment:          $%.2lf\n", DP);
	printf("Principle Borrowed:    $%.2lf\n", P);
	printf("Number of Payments:    %.0lf\n", NOP);
	printf("Annual Interest Rate:  %.2lf%%\n", AIRP); 
	printf("Monthly Payment:       $%.2lf\n", MP);
	printf("Total Repayed:         $%.2lf\n", TR);
	printf("Total Interest:        $%.2lf\n", TI);
	printf("==========================================\n");
	system("pause");
    return(0); 
}