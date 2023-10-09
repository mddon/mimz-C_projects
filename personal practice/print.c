#include <stdio.h>

void _printStr(char *str){
    int i = 0;
    do {
        putchar(str[i]);
        i++;
    } while (str[i] != '\0');
    putchar('\n');
}

void _printStr2(char *str2)
{
    char str1 [9] = "_putchar1";
    int j = 0;

    while(str1[j] != '\0'){
        putchar(str1[j]);
        j++;
    }
    putchar('\n');

    j = 0;
    for(; str2[j] != '\0'; j++){
        putchar(str2[j]);
    }
    putchar('\n');
}

void _nestedLoop(char *s){
    int i; int j;
    char *str = "I called the function _printStr2 in this nestedLoop function";
    _printStr2(str);

    i = 0;
    while(i < 3){
        j = 0;
        while(s[j] != '\0'){
            // _printStr2(str2);
            putchar(s[j]);
            j++;
        }
        i++;
    }

}

int main()
{
    char *str;
    char *str2;
    char *str3;
    str = "_putchar";
    _printStr(str);
    _printStr2(str2);

    str2 = "_putchar2";
    _printStr2(str2);

    str2 = "Tell_me_your_name_now_lols";
    _printStr2(str2);

    str2 = "I_am_just _learning_how_to_do_it_differently\n";
    _printStr2(str2);

    str3 = "I love playing!\n";
    _nestedLoop(str3);

    return (0);
}