#include <stdio.h> //header directive file that sincludes standard input and output functions.
//int x = 2; //declaration and initialization of variable 
//int y; //declaration of variable
//y = x * 3; //assignment of variable

//data types:
int age = 20; //integer
float height = 5.7; //real numbers(decimal numbers)
char grade = 'A'; //a single letter

//C does not have a seperate data type for string.
//string is represented using char arrays

char string[]="Geeks";

//printing the different data types using function.

int main()
{
    printf("Hello World\n");
    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);
    printf("Grade: %c\n", grade);
    printf("The string is: %s\n", string);

    return 0;
}

main();
