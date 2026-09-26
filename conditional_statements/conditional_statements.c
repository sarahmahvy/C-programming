#include <stdio.h>

/*DECISION MAKING STATEMENTS*/

int main(){

    /* -IF statement*/
    int age;
    printf("Please enter your age to check eligibility: \n");
    scanf("%d",&age);
    if (age>=18){
        printf("You are eligible to vote.\n");
    }

    /* -IF ELSE statement*/
    int marks;
    printf("Please enter student's marks: \n");
    scanf("%d",&marks);
    if (marks>=80){
        printf("Student passed the exam.\n");
    }
    else{
        printf("Student failed the exam.\n");
    }

    /* -Nested IF ELSE statement*/
    int num;
    printf("Enter your number: \n");
    scanf("%d",&num);
    if (num>0){
        if (num%2 == 0){
            printf("The number is an even number.");
        }
        else{
            printf("The number is an odd number.");
        }
    }
    else{
        printf("The number is a negative number.");
    }

    /* -SWITCH statement*/
    int n;
    int result = 0;
    int a;
    int b;
    printf("Please enter a number between 1 to 4: \n");
    scanf("%d",&n);
    switch(n)
    {
        case 1: printf("ADDITION\n");
                printf("\nPlease enter the first number you want to add: ");
                scanf("%d",&a);
                printf("Please enter the second number you want to add: ");
                scanf("%d",&b);
                result = a + b;
                printf("%d + %d = %d", a, b, result);
                break;
        case 2: printf("SUBTRACTION\n");
                printf("\nPlease enter the first number you want to subtract from: ");
                scanf("%d",&a);
                printf("Please enter the second number you want to subtract: ");
                scanf("%d",&b);
                result = a - b;
                printf("%d - %d = %d", a, b, result);
                break;
        case 3: printf("MULTIPLICATION\n");
                printf("\nPlease enter the first number you want to multiply: ");
                scanf("%d",&a);
                printf("Please enter the second number you want to multiply with: ");
                scanf("%d",&b);
                result = a * b;
                printf("%d x %d = %d", a, b, result);
                break;
        case 4: printf("DIVISION\n");
                printf("\nPlease enter the numerator: ");
                scanf("%d",&a);
                printf("Please enter the denominator: ");
                scanf("%d",&b);
                result = a / b;
                printf("%d / %d = %d", a, b, result);
                break;
        default: printf("Invalid input");
                break;
    }
    return 0;
}
