#include <stdio.h>
#include <math.h>

#define COUNT 15

void main() {
    double sum = 0, mult = 1, inv_sum = 0;
    printf("Введите %d чисел:\n", COUNT);
    for (int i = 0; i < COUNT; i++) {
        double temp;
        scanf("%lf", &temp);
        
        sum += temp;
        mult *= temp;
        inv_sum += 1 / temp;
    }
    
    printf("\nАрифметическое: %lf\n", sum / COUNT);
    printf("Геометричекое: %lf\n", sqrt(mult));
    printf("Гармоническое: %lf\n", COUNT / inv_sum);
}