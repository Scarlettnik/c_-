#include <stdio.h>

void main() {
    int temp;
    int arr[16];
    for (int i = 0; i < 16; i++) {
        scanf("%d", &temp);
        if (temp < 0) {
            arr[i] = 0;
            printf("Допустимые значения 0-15\n");
        }
        if (temp > 15) {
            arr[i] = 0;
            printf("Допустимые значения 1-15\n");
        }
        else {
            arr[i] = temp;
        }
    }
    for (int i = 0; i <= 15; i++) {
        for (int j = 0; j < arr[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
}