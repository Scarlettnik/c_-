#include <stdio.h>

void main() {
    int num;
    scanf("%d", &num);

    int num1 = num/1000;
    int num2 = num/100 % 10;
    int num3 = num/10 % 100;
    int num4 = num % 1000;
    int sum = num1 + num2 + num3 + num4;
    int prod = num1 * num2 * num3 * num4;

    printf("\nSum8: %d\n Prod8: %d\n", sum, prod);
    printf("\nSum16: %o (oct)\n Prod16: %x (hex)\n", sum, prod);
}