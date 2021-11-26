#include <stdio.h>
void main() {
    int a, b;
    printf("Введите пароль:\n");
    scanf("%d", &a);
    printf("Повторите пароль:\n");
    scanf("%d", &b);
    switch (a == b) {
    case 0:
        printf("\nПароли не совпадают\n");
        break;
    case 1:
        printf("\nПароли совпадают\n");
    }
}
//switch вроде бы единственная нормальная альтернативная команда для if/else
