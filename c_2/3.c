#include <stdio.h>
main (){
  int z1, z2, value, value2;
  printf ("\t");
  scanf ("%d", &value);
  value2 = value; 
  for (z1 = 0; z1 <= value; z1++, value2--){
    for (z2 = 0; z2 <= value2; z2++){
      printf ("*"); 
    }
    printf ("\n"); 
  }
}
#не совсем поняла как туда ввести сразу значение, поэтому его вывожу сразу через компилятор