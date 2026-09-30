#include <stdio.h>

int main(){
    /*ARRAYS
     -1D ARRAY*/
    int a[5] = {1,2,3,4,5};
    int b[3] = {1,2,3}; //declaration and initialization together.
    printf("%d\n",a[2]);

    /*-MULTI DIMENSIONAL ARRAY*/
    int age[2][2]={{1,2},{3,4}};
    printf("%d\n", age[0][0]);
    
    return 0;
}