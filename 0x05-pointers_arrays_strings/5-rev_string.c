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
    } while(end > start);
    start ++;
    end --;
}