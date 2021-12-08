#include <stdio.h>
int main()

{
    char str[100];
    printf("Enter a string: \n");
    gets(str);
    printf( "\rLength is: %d",strlen(str));
    return 0;

}