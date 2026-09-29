#include <stdio.h>

int main(){
    /*JUMP STATEMENTS.
     >allow you to control the flow of your program.
     
     -BREAK statement
     -immediately exits the loop or switch.
     -ends the execution of program permenantly|prematurely.*/
     for (int i=1; i <= 5; i++){
        if(i==3){
            break;
        }
        printf("%d\n",i);
     }
    /*-CONTINUE statement
     -skips current iteration.*/
     for (int i=1; i <=5; i++){
        if(i==3){
            continue;
        }
        printf("%d\n",i);
     } 

    /*-GOTO statement
     -transfers control to labelled statement within same function.*/
     int age;
     start:
     printf("Enter your age: ");
     scanf("%d",&age);
     if (age < 0){
        goto start;
     }
     printf("Your age is %d\n",age);
     return 0;

}