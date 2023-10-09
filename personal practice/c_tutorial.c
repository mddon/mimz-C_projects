#include <stdio.h>
#include <string.h>
#include <math.h> 
#include <stddef.h>
#include <ctype.h> //for uppercase conversion.

#define SIZE 255


void userinput(){
    int age;
    char name[25];
    printf("what is your name? ");
    //scanf("%s", &name); this does not take whitespace.
    fgets(name, 25, stdin); //this accepts whitespace.
    name[strlen(name)-1] = '\0'; //this eliminates the automatic newline that comes with fgets function

    printf("How old are you? ");
    scanf("%d", &age);

    printf("\nHello %s,", name);
    printf("\nYou are %d year old.", age);
}

void mathfunc(){
    double square_root = sqrt(9);
    double exponent = pow(4, 2);
    int round_up1 = round(3.145678); //round number
    int round_up2 = ceil(3.145678); //round up
    int round_up3 = floor(3.145678); //round down
    double absolute_value = fabs(-39); //checks how far a number is from 0
    double logrithym = log(4);
    double sine = sin(90);
    double cosine = cos(90);
    double tangent = tan(90);
    printf("square root is %.2f\nexponent is %.2f\nround %d\nround up is %d\nround down is %d\n"
    "absolute value is %.2f\nlogrithym is %.4f\nsine is %.4f\ncosine is %.4f\ntan is %.4f", square_root, exponent, 
    round_up1, round_up2, round_up3, absolute_value, logrithym, sine, cosine,tangent);
}

void switchfunc(){
    //it gives alternative to several else if statements

    char score;

    printf("\nPlease enter your the grade that corresponds to your score category; " 
    "A = 90-100, B = 70-89, C = 50-69, D = 40-49, F = 0-39: ");
    scanf("%c", &score);

    score = toupper(score);

    switch(score)
    {
        case 'A':
            printf("Wow! You are a genius.\n");
            break;
        case 'B':
            printf("Awesome! You performed amazingly well.\n");
            break;
        case 'C':
            printf("You are and average student.\n");
            break;
        case 'D':
            printf("You had a weak pass.\n");
            break;
        case 'F':
            printf("YOU FAILED!\n");
            break;
        default:
            printf("Please enter only valid score category!\n");
    }
}

void calculator(){
    char operator;
    double num1;
    double num2;
    double result;

    printf("select what operation you want, +, -, *, or /: " );
    scanf("%c", &operator);

    if((operator == '+') || (operator == '-') || (operator == '*') || (operator == '/')){
        printf("\ncorrect operator\n");
    }
    else {
        printf("\nInvalid operation/operator");
        scanf("%c", &operator);
        printf("\nselect what operation you want, +, -, *, or /: " );
        scanf("%c", &operator);
    }

    printf("Enter number 1 (first operand): ");
    scanf("%lf", &num1);

    printf("Enter number 2 (second operand): ");
    scanf("%lf", &num2);

    switch(operator){
        case '+':
            result = num1 + num2;
            printf("The sum of %.2f & %.2f is %.2f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("The difference of %.2f & %.2f is %.2f\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("The product of %.2f & %.2f is %.2f\n", num1, num2, result);
            break;
        case '/':
            result = num1 / num2;
            printf("The division of %.2f & %.2f is %.2f\n", num1, num2, result);
            break;    
        default:
            printf("invalid operation");
            break;
    }
}

void _pointer(){

    int a = 12;

    int *b = NULL;
    b = &a;

    printf("value of a is %d\n", a);
    printf("address of a is %p\n", &a);
    printf("size of a is %d\n", sizeof(a));
    
    printf("value at stored address of b is %d\n", *b);
    printf("value of b is %p\n", b);
    printf("address of b is %p\n", &b);
    printf("size of a is %ld\n", sizeof(b));

    *b = 20;
    printf("value at stored address of b is %d\n", *b);
    printf("value of b is %p\n", b);
    printf("address of b is %p\n", &b);
    printf("size of a is %ld\n", sizeof(b));    
}

void _write(){
    FILE *c_file = fopen("test.txt", "w");
    fprintf(c_file, "_pointer(), \n\nI just used a write function, " 
    "which have cleared the original contents.");
    fclose(c_file);

    FILE *fileC = fopen("C:\\Users\\Miracle\\Desktop\\test2.txt", "a");
    fprintf(fileC, "\n\nMy last append to this file before read.");
    fclose(fileC);    
}

void _openRead(){
    
    FILE *fileC = fopen("C:\\Users\\Miracle\\Desktop\\C Files\\mimz-C_projects\\personal practice\\print.c", "r");
    char buffer1[SIZE];

    if(fileC == NULL){
        printf("Unable to open file");
        return;
    }
    while(fgets(buffer1, SIZE, fileC) != NULL){
        printf("%s", buffer1);
    }

    fclose(fileC);

    FILE *cFile = fopen("test.txt", "r");
    char buffer2[SIZE];

    if(cFile == NULL) {
        printf("File couldn't open");
        return;
    }
    while(fgets(buffer2, SIZE, cFile) != 0) {
        printf("%s", buffer2);
    }
}

void _removeFile(){
    if(remove("tempCodeRunnerFile.c") == 0){
        printf("This file was successfully removed!\n");
    } 
    else {
        printf("This file was not removed!");
    }

}
int main(){

    //userinput();
    /*mathfunc();*/
    //switchfunc();
    // calculator();
    // _pointer();
    // _write();
    _openRead();
    // _removeFile();

    return 0;
}