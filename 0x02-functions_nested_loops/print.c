#include <stdio.h>

/**
 * _printStr - Prints a null-terminated string followed by a newline.
 * @str: The string to be printed.
 */
void _printStr(char *str)
{
	int i = 0;
	while (str[i] != '\0') {
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}

/**
 * _printStr2 - Prints two strings followed by newlines.
 * @str2: The first string to be printed.
 */
void _printStr2(char *str2)
{
	char str1[9] = "_putchar1"; /*character array, addcode in this function.*/
	int j = 0;

	while (str1[j] != '\0') {
		putchar(str1[j]);
		j++;
	}
	putchar('\n');

	j = 0;
	while (str2[j] != '\0') {
		putchar(str2[j]);
		j++;
	}
	putchar('\n');
}

/**
 * _nestedLoop - Prints a string multiple times using nested loops.
 * @s: The string to be printed.
 */
void _nestedLoop(char *s)
{
	int i, j;
	char *str = "I called the function _printStr2 in this nestedLoop function";
	_printStr2(str);
	i = 0;
	while (i < 3) {
		j = 0;
		while (s[j] != '\0') {
			putchar(s[j]);
			j++;
		}
		i++;
	}
}

int main()
{
	char *str = "_putchar";
	char *str2 = "_putchar2";
	char *str3 = "_putchar1 is a character array addcoded in the _printStr2 function.\n";
	char *str4 = "I_am_just _learning_how_to_do_it_differently\n";
	char *str5 = "I love playing!\n";

	_printStr(str);
	_printStr2(str2);
	_printStr2(str3);
	_printStr2(str4);
	_nestedLoop(str5);

	return 0;
}
