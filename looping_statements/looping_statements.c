#include <stdio.h>

int main(){
    /*LOOPING STATEMENTS.
     -FOR loop
      >intialization
      >condition
      >increment/decrement
      >Iterates over fixed number of iteration.*/
    for (int i=1; i <=5; i++) //use ++ for increment.
    {
        printf("%d\n",i);
    }
    
    /* -WHILE loop
        >Iterates until the condition is met.
        >No specific number of iteration.*/
    int count = 1;
    while(count<=5){
        printf("%d",count);
        count ++;
    }
}