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
}
