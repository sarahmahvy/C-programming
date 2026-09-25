#include <stdio.h>



int isEven(){
    int num;
    printf("\nPlease enter a number: ");
    scanf("%d",&num);
    if(num%2 == 0){
        printf("Number is even.");
    }
    else{
        printf("Number is odd."); 
    }
    return 0;
}

int main(){
    int a=10, b=5, c=7;
    int result = (a + b) * c;
    printf("%d\n",result);
    printf("Try it yourself!");
    isEven();
    return 0;
}