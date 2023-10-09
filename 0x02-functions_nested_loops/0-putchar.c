#include <stdio.h>

void _printStr(char *str)
{
	int i = 0;
	do {
		putchar(str[i]);
		i++;
	} while (str[i] != '\0');
	putchar('\n');
}

void _printStr2()
{
	char str2 [9]= "_putchar2";
	int j = 0;

	for(; str2[j] != '\0'; j++)
	{
		putchar(str2[j]);
	}
	putchar('\n');
}

int main()
{
	char *str;
	str = "_putchar";
	_printStr(str);

	_printStr2();

	return (0);
}
