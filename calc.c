#include <stdio.h>
//calc
int main()
{
    float num1, num2;
    char operation;
    puts("Welcome to Calc [v.1.0]\nDeveloped by ZXV studios. All Rights Reserved.\n");
	puts("Enter two operands. Example format: 1+1:");
    while (1) {
        scanf("%f%c%f", &num1, &operation, &num2);
        if (operation == '+')
            printf("answer: %.1f\n", num1+num2);
        if (operation == '-')
            printf("answer: %.1f\n", num1-num2);
        if (operation == '*')
            printf("answer: %.1f\n", num1*num2);
        if (operation == '/')
            printf("answer: %.1f\n", num1/num2);
            
            //needs an exit code to exit this program
    }
    return 0;
}
