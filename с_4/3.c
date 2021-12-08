#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int i = 0, j = 0, m[10];
void swap(int*m[i],int*m[j])
{
    int t=*m[i];
    *m[i]=*m[j];
    *m[i]=t;
}
int main()
{
printf ("Введите элементы списка: ");
for (i = 0; i <= 9; i++)
{
  scanf ("%d",&m[i]);
}
for (i = 9; i >= 1; i--)
    {
        for (j = 0; j <= i; j++)
        {
          if ((m[i]<m[j]) swap(&m[i], &m[j]));
        }
    }
printf ("V poryadke vozrastania: ");
for (i = 0; i <= 9; i++)
{
   printf ("%d", m[i]);
}
getch ();
return 0;
}