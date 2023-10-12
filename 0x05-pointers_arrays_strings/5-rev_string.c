#include "main.h"

void rev_string(char *s)
{
    int i, end, start;
    char tmp;

    for(i=0; s[i] != '\0'; i++);

    start = 0;
    end = i-1;
    do{
        tmp = s[start];
        s[start] = s[end];
        s[end] = tmp;

        start ++;
        end --;
    } while(end > start);
}

#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}