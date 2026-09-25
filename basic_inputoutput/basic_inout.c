#include <stdio.h>
int main() {
    int age; //declares variable
    printf("Enter your age: "); //takes input from user
    scanf("%d", &age); //reads input and stores it in the variable age
    printf("Your age is: %d\n", age); //prints output with the input value
    return 0;
}

int type_modifiers(){
    //Type modifiers.
        /*unsigned int:
            -allows non-negative values*/
    unsigned int count = 10; 

        /*the "short" modifier:
            -allocates less memory resulting in smaller range of values
            -uses half the memory compared to default*/
    short int temperature = -5; 

        /*the "long" modifier:
            -allocates more memory resulting in larger range of values
            -uses twice the memory compared to default */
    long int population = 1000000l;

        /*the "const" modifier:
            -declares a variable as constant*/
    const float PI = 3.14159;

        /*the "volatile" modifier:
            -indicates the variable value can be changed by external factors*/
    volatile int sensorvalue;

    return 0;
}

/*LITERALS
 -provide immediate variable for calculations or initialization*/
int literals(){
    int score = 85;
    float pivalue = 3.14;
    char grade = "A";
    char message[]="Hello world!";
}