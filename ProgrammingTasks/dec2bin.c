#include <stdio.h>
int
main ()
{
  char ch, bin;



  printf ("\nEnter value of char\n");
  scanf (" %d", &ch);

  printf ("\nValue of char : %d", ch);

  printf ("\n ch >> 1 = %d\n", ch >> 2);
  printf ("\n ch << 1 = %d\n", ch << 2);



  return 0;
}
