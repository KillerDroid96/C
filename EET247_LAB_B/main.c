/*
================================================| Objective |==================================================
| HELLO WORLD, My name is XXXXXXXXX                                                                           |
| I am from: XXXXXXXXXXX                                                                                      |
| My student ID numbers is: XXXXXXX                                                                           |
| This is my first C program for course EET-247                                                               |
| Submit your executable file, documented source code and screen shot of your output for proper consideration.|
===============================================================================================================

============================================| Complete Changelog |=============================================
| V7 Displays multiple different versions
| + Moved everything to the left
| - Default format
| + Added all previous versions

| V6 Reformatted everything
| + Added gets(); function to end of printed string to make it look cleaner
| + Formatted everything so that it mimics a Contacts directory

| V5 Combined new work with imported work
| + Location (replaces Address)
| - Address
| + Added Student ID and formatting from V4
| + Set Imported V8 as current Version
|
| V4 Used a janky method to make the input clear from screen when displaying output
| - Removed use of system("pause") After system("pause") is executed nothing else can be executed
| + Custom equivalent of system("pause") Used printf("Press enter key to exit..."); then getchar()
|
| V3 Rewrote everything to take an input and output it in the format of V2
| + initial commit for rewrite
|
| V2 Moved Everything to the right and down
| + printf("\n\n\n\n\n\n\n\n\n\n");
| + printf("                                    text)"
| - printf("text");
|
| V1 Objective has been met
| + initial commit
|
| V0 Import previous work on strings
| + Added V1-V8
===============================================================================================================


+++++++++++++++++++++++++++++++++++++++++++++++++++| Version 7 |+++++++++++++++++++++++++++++++++++++++++++++++
| Program    : LAB B
| Created    : 02/09/2018
| Programmer : Matthew Keller
| Summary    : Strings and null-terminated character sequences
| Credits    :
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
| Changelog  : Displays multiple different formats
| + Added previous formats in
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
#include <stdio.h>
// #include <stdlib.h>

int main () {
    char first_name[100], last_name[100], id[100], age[100], location[100], number[100], email[100];
    FILE * fp;

    fp = fopen ("file.txt", "w+");
    fputs("", fp);

    rewind(fp);
    fscanf(fp, "%s %s %s %s %s %s %s", first_name, last_name, age, id, location, number, email);

    printf("\n\n");
    printf("\n =========================================");
    printf("\n |           Enter New Contact           |");
    printf("\n =========================================");
    printf("\n");
    printf(" | First Name   : "); gets(first_name);
    printf(" | Last Name    : "); gets(last_name);
    printf(" | Phone Number : "); gets(number);
    printf(" | E-Mail       : "); gets(email);
    printf(" | Location     : "); gets(location);
    printf(" | Student ID   : "); gets(id);
    printf(" | Age          : "); gets(age);
    printf("\n ========================================\n\n");

    printf("\n\n");
    printf("\n ========================================");
    printf("\n |               Contacts               |");
    printf("\n ========================================");
    printf("\n |   Name         : %s %s", first_name, last_name);
    printf("\n |   Number       : %s", number);
    printf("\n |   E-Mail       : %s", email);
    printf("\n |   Location     : %s", location);
    printf("\n |   Student ID   : %s", id);
    printf("\n =======================================\n");

    printf("\n Hello, %s %s your %s years old, your student ID is %s and you live in %s. ", first_name, last_name, age, id, location);
    printf("\n You can be contacted at %s or %s \n\n",  number, email);

    printf(" My name is               : %s %s \n",first_name, last_name);
    printf(" I am from                : %s \n",location);
    printf(" My student ID numbers is : %s \n ",id);
    printf("This is my first C program for course EET-247 \n\n");

    printf(" Hello World, My name is Matthew \n");
    printf(" I am from Overland Park \n");
    printf(" My student ID number is 079378 \n");
    printf(" This is my first C program for course EET-247 \n\n");

    printf(" Hello, %s %s your %s years old and you live in %s \n\n", first_name, last_name, age, location);

    printf("\n\n");
    printf(" Press Enter Key to Exit. . .");
    printf("\n");
    getchar();
    return(0);

} // Expand Declarations below to view previous versions
/*
+++++++++++++++++++++++++++++++++++++++++++++++++++| Version 6 |+++++++++++++++++++++++++++++++++++++++++++++++
| Program    : LAB B
| Created    : 02/09/2018
| Programmer : Matthew Keller
| Summary    : Strings and null-terminated character sequences
| Credits    :
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
| Changelog  : Reformatted Everything
| + Added gets(); function to end of printed string to make it look cleaner
| + Formatted everything so that it mimics a Contacts directory.
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
#include <stdio.h>
// #include <stdlib.h>

int main () {
    char first_name[100], last_name[100], id[100], age[100], location[100], number[100], email[100];
    FILE * fp;

    fp = fopen ("file.txt", "w+");
    fputs("", fp);

    rewind(fp);
    fscanf(fp, "%s %s %s %s %s %s %s", first_name, last_name, age, id, location, number, email);

    // Prints the specific inputs in the order below
    printf("\n\n");
    printf("\n =========================================");
    printf("\n |           Enter New Contact           |");
    printf("\n =========================================");
    printf("\n");
    printf(" | First Name   : "); gets(first_name);
    printf(" | Last Name    : "); gets(last_name);
    printf(" | Phone Number : "); gets(number);
    printf(" | E-Mail       : "); gets(email);
    printf(" | Location     : "); gets(location);
    printf(" | Student ID   : "); gets(id);
    printf(" ==========================================");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n ");
    printf("\n ========================================");
    printf("\n |               Contacts               |");
    printf("\n ========================================");
    printf("\n |   Name         : %s %s", first_name, last_name);
    printf("\n |   Number       : %s", number);
    printf("\n |   E-Mail       : %s", email);
    printf("\n |   Location     : %s", location);
    printf("\n |   Student ID   : %s", id);
    printf("\n =======================================");
    printf("\n\n\n");
    printf("  Press Enter Key to Exit. . .");
    printf("\n\n\n\n\n\n\n");
    getchar();
    return(0);

+++++++++++++++++++++++++++++++++++++++++++++++++++| Version 5 |+++++++++++++++++++++++++++++++++++++++++++++++
| Program    : LAB B
| Created    : 02/09/2018
| Programmer : Matthew Keller
| Summary    : Strings and null-terminated character sequences
| Credits    :
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
| Changelog  : Combined new work with imported work
| + Location (replaces Address)
| - Address
| + Added Student ID and formatting from V4
| + Set Imported V8 as current Version
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 #include <stdio.h>
// #include <stdlib.h>

int main () {
    char first_name[100], last_name[100], id[100], age[100], location[100], number[100], email[100];
    FILE * fp;

    fp = fopen ("file.txt", "w+");
    fputs("", fp);

    rewind(fp);
    fscanf(fp, "%s %s %s %s %s %s %s", first_name, last_name, age, id, location, number, email);

    // Prints the specific inputs in the order below
    printf("                            Enter First Name: ");
    gets(first_name);
    printf("                            Enter Last Name: ");
    gets(last_name);
    printf("                            Enter Age: ");
    gets(age);
    printf("                            Enter Student ID: ");
    gets(id);
    printf("                            Enter Phone Number: ");
    gets(number);
    printf("                            Enter E-Mail: ");
    gets(email);
    printf("                            Enter Location: ");
    gets(location);

    // Prints outputs in the order listed at the end.
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\n      Hello, %s %s your %s years old, your student ID is %s and you live in %s. ", first_name, last_name, age, id, location);
    printf("\n      You can be contacted at %s or %s",  number, email);
    printf("\n\n\n");
    printf("                      Press enter key to exit . . .");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    getchar();
    return(0);
}

+++++++++++++++++++++++++++++++++++++++++++++++++++| Version 4 |+++++++++++++++++++++++++++++++++++++++++++++++
| input clear from screen when displaying output
| - Removed use of system("pause") After system("pause") is executed nothing else can be executed
| + Custom equivelent of system("pause") Used printf("Press enter key to exit..."); then getchar()
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <stdio.h>
#include <stdlib.h>
int main () {
	char name[100], location[100], id[100];
	FILE * fp;
	fp= fopen ("file.txt", "w+");
	fputs("", fp);
	rewind(fp);
    fscanf(fp, "%s %s %s ", name, location, &id);
	printf("\n\n\n");
	printf("                                    Enter Name: ");
	gets_s(name);
	printf("                                    Enter Location: ");
	gets_s(location);
	printf("                                    Enter Student ID: ");
	gets_s(id);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("                                    This is my first C program for course EET-247 \n\n");
	printf("                                    My name is               : %s \n",name);
	printf("                                    I am from                : %s \n",location);
	printf("                                    My student ID numbers is : %s ",id);
	printf("\n\n\n\n\n");
	printf("                                    Press enter key to exit . . .");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n");
	getchar();
	return(0);

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Version    : 3
// Program    : LAB B
// Creaded    : 02/07/2018
// Programmer : Matthew Keller
// Summary    : Strings and null-terminated character sequences
// Credits    :
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Changelog  : Rewrote everything to take an input and output it in the format of V2
// + initial commit for rewrite
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
int main () {
	char name[100], location[100], id[100];
	FILE * fp;
	fp= fopen ("file.txt", "w+");
	fputs("", fp);
	rewind(fp);
    fscanf(fp, "%s %s %s ", name, location, &id);
	printf("Enter Name: ");
	gets_s(name);
	printf("Enter Location: ");
	gets_s(location);
	printf("Enter Student ID: ");
	gets_s(id);
	printf("This is my first C program for course EET-247 \n\n");
	printf("My name is               : %s \n",name);
	printf("I am from                : %s \n",location);
	printf("My student ID numbers is : %s ",id);
	system("pause");
	return(0);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Version    : 2
// Program    : LAB B
// Creaded    : 02/07/2018
// Programmer : Matthew Keller
// Summary    : Printing
// Credits    : Problem Solving and Program Design in C
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Changelog  : Moved Everthing to the right and down
// + printf("\n\n\n\n\n\n\n\n\n\n");
// + printf("                                    text)"
// - printf("text");
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("\n\n\n\n\n\n\n\n\n\n");
	printf("                                    Hello World, My name is Matthew \n");
	printf("                                    I am from : Overland Park \n");
	printf("                                    My student ID number is: 079378 \n");
	printf("                                    This is my first C program for course EET-247 \n\n\n");
	printf("                                    "),system("pause");
	return(0);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Version    : 1
// Program    : LAB B
// Creaded    : 02/07/2018
// Programmer : Matthew Keller
// Summary    : Printing
// Credits    : Problem Solving and Program Design in C
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Changelog  : Objective has been met
// + initial commit
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("Hello World, My name is Matthew \n");
	printf("I am from : Overland Park \n");
	printf("My student ID number is: 079378 \n");
	printf("This is my first C program for course EET-247 \n\n\n");
	system("pause");
	return(0);
}

=================================================| Importing my previous work on strings |=========================================
 /*
////////////////////////////////////
// V1
// Changelog :
// Summary   : Joins two strings
///////////////////////////////////

#include <stdio.h>
#include <stdlib.h> // system("pause"); Replaces the multiple getchar(); used for holding characters before return is executed.
#include <string.h>
int main()
{
	char first_name[100];
	char last_name[100];
    char age[100];

	printf("Enter First Name: ");
	gets(first_name);

	printf("Enter Last Name: ");
	gets(last_name);

	//printf("Enter Age: ");
	//gets(age);
	//printf("%s",age);

	strcat(first_name, last_name);

	printf("\n You're name is %s \n", first_name);

	printf("\n");
	system("pause");
	return 0;
}
//////////////////////////////////////////////////////////////////
// V2
// Changelog : New approach
// Summary   : Strings and null-terminated character sequences
// Credits   : http://www.cplusplus.com/doc/tutorial/ntcs/
/////////////////////////////////////////////////////////////////
#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

int main ()
{
  char question1[] = "What is your first name? ";
  string question2 = "What is your last name? ";

  char answer1 [80];
  string answer2;

  char question3[] = "How old are you? ";
  char answer3 [80];

  cout << question1;
  cin >> answer1;

  cout << question2;
  cin >> answer2;

  cout << question3;
  cin >> answer3;

  cout << "Hello, " << answer1;
  cout << " " << answer2 << "\n Your're age is " << answer3 << "!\n";

  //cout << "Age" << answer3 << "!\n";
  system("pause");
  return 0;
}

//////////////////////////////////////////////////////////////
// V3
// Changelog : Cleaned up the code & changed output
// Summary   : Strings and null-terminated character sequences
// Credits   : http://www.cplusplus.com/doc/tutorial/ntcs/
////////////////////////////////////////////////////////////////
#include <stdlib.h>   // C Library
#include <iostream>   // C++ Library
#include <string>     // C++ Library
using namespace std;

int main ()
{
  char question1[] = "What is your first name? ";
  string question2 = "What is your last name? ";
  string question3 = "How old are you? ";

  char answer1 [50]; // Sets character limit for answers
  string answer2;
  string answer3;

  cout << question1;
  cin >> answer1;

  cout << question2;
  cin >> answer2;

  cout << question3;
  cin >> answer3;

  cout << "\n\n Hello, " << answer1;
  cout << " " << answer2 << "\n Your " << answer3 << " years old! \n";

  printf("\n ");
  system("pause");
  return 0;
}

//////////////////////////////////////////////////////////////////////
// Version    : 4
// Program    : Printing Strings
// Creaded    : 02/07/2018
// Programmer : Matthew Keller
// Summary    : Strings and null-terminated character sequences
// Credits    : http://www.cplusplus.com/doc/tutorial/ntcs/
////////////////////////////////////////////////////////////////////
// Changelog  :
// - Removed "using namespace std" it's bad practice
// + Added the use of "std::" ex: std::string, std::cout, std::cin
////////////////////////////////////////////////////////////////////
#include <stdlib.h>   // C Library
#include <iostream>   // C++ Library
#include <string>     // C++ Library

int main ()
{
  char question1[] = "What is your first name? ";
  std::string question2 = "What is your last name? ";
  std::string question3 = "How old are you? ";

  char answer1 [50]; // Sets character limit for answers
  std::string answer2;
  std::string answer3;

  std::cout << question1;
  std::cin >> answer1;

  std::cout << question2;
  std::cin >> answer2;

  std::cout << question3;
  std::cin >> answer3;

  std::cout << "\n\n Hello, " << answer1;
  std::cout << " " << answer2 << "\n Your " << answer3 << " years old! \n";

  printf("\n ");
  system("pause");
  return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////
// Version    : 5
// Program    : Printing Strings
// Creaded    : 02/07/2018
// Programmer : Matthew Keller
// Summary    : Strings and null-terminated character sequences
// Credits    : https://www.tutorialspoint.com/c_standard_library/c_function_fscanf.htm
///////////////////////////////////////////////////////////////////////////////////////////
// Changelog  :
// + Rewrote the program in only C
// + Added Address
///////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

int main () {
   char first_name[100], last_name[100], age[100], address[100];
   FILE * fp;

   fp = fopen ("file.txt", "w+");
   fputs("", fp);

   rewind(fp);
   fscanf(fp, "%s %s %s %s %d", first_name, last_name, age, &address);

   printf("Enter First Name: ");
   gets_s(first_name);

   printf("Enter Last Name: ");
   gets_s(last_name);

   printf("Enter Your Address: ");
   gets_s(address);

   printf("Enter Age: ");
   gets_s(age);

   printf("\n Hello, %s %s your %s years old and you live at %s \n\n", first_name, last_name, age, address);

   system("pause");
   fclose(fp);
   return(0);
}

///////////////////////////////////////////////////////////////////////////////////////////
// Version    : 6
// Program    : Printing Strings
// Creaded    : 02/07/2018
// Programmer : Matthew Keller
// Summary    : Strings and null-terminated character sequences
// Credits    :
///////////////////////////////////////////////////////////////////////////////////////////
// Changelog  :
// + Added Phone Number
// + Added E-Mail
///////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

int main () {
   char first_name[100], last_name[100], age[100], address[100], number[100], email[100];
   FILE * fp;

   fp = fopen ("file.txt", "w+");
   fputs("", fp);

   rewind(fp);
   fscanf(fp, "%s %s %d %s %s ", first_name, last_name, age, address, number, &email);

   printf("Enter First Name: ");
   gets_s(first_name);

   printf("Enter Last Name: ");
   gets_s(last_name);

   printf("Enter Phone Number: ");
   gets_s(number);

   printf("Enter E-Mail: ");
   gets_s(email);

   printf("Enter Address: ");
   gets_s(address);

   printf("Enter Age: ");
   gets_s(age);

   printf("\n Hello, %s %s your %s years old and you live at %s. \n You can be contacted at %s or %s \n\n", first_name, last_name, age, address, number, email);

   system("pause");
   fclose(fp);
   return(0);
}
///////////////////////////////////////////////////////////////////////////////////////////
// Version    : 7
// Program    : Printing Strings
// Creaded    : 02/07/2018
// Programmer : Matthew Keller
// Summary    : Strings and null-terminated character sequences
// Credits    :
///////////////////////////////////////////////////////////////////////////////////////////
// Changelog  :
// + Added comments to better understand what's going on.
///////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

int main () {
   char first_name[100], last_name[100], age[100], address[100], number[100], email[100];
   FILE * fp;

   fp = fopen ("file.txt", "w+");
   fputs("", fp);

   rewind(fp);
   fscanf(fp, "%s %s %d %s %s ", first_name, last_name, age, address, number, &email);

   // Prints the specific inputs in the order below
   printf("Enter First Name: ");
   gets_s(first_name);

   printf("Enter Last Name: ");
   gets_s(last_name);

   printf("Enter Age: ");
   gets_s(age);

   printf("Enter Phone Number: ");
   gets_s(number);

   printf("Enter E-Mail: ");
   gets_s(email);

   printf("Enter Address: ");
   gets_s(address);


   // Prints outputs in the order listed at the end.
   printf("\n Hello, %s %s your %s years old and you live at %s. \n You can be contacted at %s or %s \n\n", first_name, last_name, age, address, number, email);

   system("pause");
   fclose(fp);
   return(0);
}

///////////////////////////////////////////////////////////////////////////////////////////
// Version    : 8
// Program    : Printing Strings
// Creaded    : 02/07/2018
// Programmer : Matthew Keller
// Summary    : Strings and null-terminated character sequences
// Credits    :
///////////////////////////////////////////////////////////////////////////////////////////
// Changelog  :
// +
///////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

int main () {
    char first_name[100], last_name[100], age[100], address[100], number[100], email[100];
    FILE * fp;

    fp = fopen ("file.txt", "w+");
    fputs("", fp);

    rewind(fp);
    fscanf(fp, "%s %s %d %s %s ", first_name, last_name, age, address, number, &email);

    // Prints the specific inputs in the order below
    printf("Enter First Name: ");
    gets_s(first_name);

    printf("Enter Last Name: ");
    gets_s(last_name);

    printf("Enter Age: ");
    gets_s(age);

    printf("Enter Phone Number: ");
    gets_s(number);

    printf("Enter E-Mail: ");
    gets_s(email);

    printf("Enter Address: ");
    gets_s(address);


    // Prints outputs in the order listed at the end.
    printf("\n Hello, %s %s your %s years old and you live at %s. \n You can be contacted at %s or %s \n\n", first_name, last_name, age, address, number, email);

    system("pause");
    fclose(fp);
    return(0);
}
*/