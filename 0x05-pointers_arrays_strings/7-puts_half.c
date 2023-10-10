#include "main.h"
#include <stdio.h>

void puts_half(char *str){
    int i, j;
    int half;

    for(i=0; str[i] != '\0'; i++);

    if (i % 2 == 0){
        half = i/2;
    } else{
        half = (i-1)/2;
    }

    for(; str[half] != '\0'; half++){
        putchar(str[half]);
    }
}

int main(void)
{
    char *str;

    str = "01234567890";
    puts_half(str);
    return (0);
}