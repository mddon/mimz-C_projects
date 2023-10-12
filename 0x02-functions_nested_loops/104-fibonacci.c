#include <stdio.h>

void fibo_nth_term(int a, int b, int n){
    int i; 
    long unsigned int nxtValue = 0;

    printf("%d, %d, ", a,b);

    for(i=0; i<n-2; i++){
        nxtValue = a + b;
        if(i<n-3){
            printf("%lu, ", nxtValue);
        } else {
            printf("%lu", nxtValue);
        }
        a = b;
        b = nxtValue;
    }
}

int main(){
    fibo_nth_term(1,2,10);
    return 0;
}