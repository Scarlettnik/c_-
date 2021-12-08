#include <stdio.h>

void main() {
    char str1[100], str2[100];
    printf("first:\n");
    scanf("%100s", str1);
    printf("\nsecond:\n");
    scanf("%100s", str2);

    for (int i = 0; i < 1000; i++) {
        if (str1[i] != str2[i]) {
            printf("\nСтроки не совпадают\nСовпадают до: %d\n", i);
            break;
        } else {
            if ((int) str1[i] == 0) {
                printf("\nСтроки совпадают\nВсе (%d) совпадения\n", i);
                break;
            }
        }
    }
}