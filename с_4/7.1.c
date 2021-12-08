#include <stdio.h>
#include <stdlib.h>


void main() {
    int n;
    printf("\n");
    scanf("%d", &n);
    double *p = NULL;
    p = (double*) malloc(sizeof(double) * n);

    for (int i = 0; i < n; i++) {
        p[i] = (float) rand() / (float) rand() * 1000;
    }

    for (int i = 0; i < n; i++) {
        printf("%lf\n", p[i]);
    }

    free(p);
}