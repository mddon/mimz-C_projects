#include <stdio.h>

int main() {
    float a = 12;

    float *b;
    b = &a;

    printf("value of a is %f\n", a);
    printf("address of a is %p\n", &a);
    printf("size of a is %ld\n", sizeof(a));
    
    printf("value of b is %p\n", b);
    printf("value at address of b is %f\n", *b);
    printf("size of a is %ld\n", sizeof(b));
}
