#include "main.h"

void print_rev(char *s){
    int i, j;

    for(i=0; s[i] != '\0'; i++);

    j = i-1;
    do{
        putchar(s[j]);
    } while(j>=0);
    j--;
}