#include <stdio.h>
#include <math.h> 
void main() {
    double a, b;
    scanf("%lf %lf", &a, &b);
    double Hyp = sqrt(a*a + b*b);
    double Per = a + b + Hyp;
    double Square = a * b / 2;
    printf("Гипотенуза:%f\n Периметр:%f\n Площадь: %f\n", Hyp, Per, Square);
}
# зачем здесь импортировать математику (компилятор указал это как ошибку)