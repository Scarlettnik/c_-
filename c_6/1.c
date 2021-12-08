#include <stdio.h>
 
void pound(const double n);
 
int main()
 {
    double d;
    printf("Введите число double: \n");
    scanf("%lf", &d);
    pound(d);
    return 0;
 }
 
void pound(const double n)
{
    double res;
    res =  n * n * n;
    printf("%lf", res);
    printf("\n");
}