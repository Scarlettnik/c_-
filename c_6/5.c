#include <stdio.h>
#include <stdlib.h>
#define RAND_AMOUNT 10
double randrange(int, int);
void main() {
    int a, b;
    printf("\nОт:\n ");
    scanf("%d", &a);
    printf("До:\n ");
    scanf("%d", &b);
    double rands[RAND_AMOUNT];
    for (int i = 0; i < RAND_AMOUNT; i++) {
        rands[i] = randrange(a, b);
    }
    for (int i = 0; i < RAND_AMOUNT; i++) {
        printf("%d) %lf\n", i+1, rands[i]);
    }
}
double randrange(int a, int b) {
    double rnd = rand();
    return a + (rnd / RAND_MAX) * b;
}