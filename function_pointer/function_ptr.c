#include <stdio.h>
//function pointer has the ability to hold several functions

int add(int a, int b){
    return (a+b);
}

int (*ptr)(int, int) = &add;

int main(){
    printf("%d\n", add(2, 5));
    printf("%d\n", (*ptr)(2, 5));
}