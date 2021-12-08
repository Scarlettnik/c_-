#include <stdio.h>
#include <stdlib.h>
void main() {
    double rnd;
    for (int i = 0; i < 5; i++) {
        rnd = rand();
        printf("%lf\n", (rnd / RAND_MAX) * 3);
    }
}