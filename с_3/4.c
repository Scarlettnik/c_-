#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
void bubbleSort(int *num, int size)
{
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = (size - 1); j > i; j--)
    {
      if (num[j - 1] > num[j])
      {
        int temp = num[j - 1];
        num[j - 1] = num[j];
        num[j] = temp;
      }
    }
  }
}
int main()
{
  int a[8];
  for (int i = 0; i < 8; i++) 
  {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
  }
  bubbleSort(a, 8);  
  for (int i = 0; i<8; i++)
    printf("%d ", a[i]);
  getchar(); getchar();
  return 0;
}