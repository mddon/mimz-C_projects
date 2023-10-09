#include <stdio.h>

void addnum(int num1, int num2)
{
    int result;
    result = num1 + num2;
    printf("The sum of the two numbers is %d\n", result);
}
int main()
{
    addnum(2,5);
    addnum(15,300);
    printf("I am coming tomorrow");

    return 0;
}