#include <stdio.h>
int main()
{
 long int x, xF,d;
 printf("Введите число:");
 scanf("%ld",&xF);
 x=xF;
 for(d=1;d<x;d++)
 {
     xF=xF*(x-d);
 }
printf("Факториал =%ld",xF);
}