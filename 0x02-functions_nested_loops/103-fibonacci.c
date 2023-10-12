#include <stdio.h>

int main(){
    int x = 1;
    int y = 2; 
    int sum = 0;
    int nxtValue = 0;

    while (x <= 4000000){
    if(x % 2 == 0){
        sum += x ;
    }
        nxtValue = x + y;
        x = y;
        y = nxtValue;
    }

    printf("The sum of the even-valued terms %d\n", sum);

    return 0;
}