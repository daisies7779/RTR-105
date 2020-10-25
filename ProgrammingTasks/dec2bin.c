#include <stdio.h>
int main ()
{
  char ch, bin;
  printf ("\nEnter value of char\n");
  scanf (" %d", &ch);

  printf ("\nValue of char : %d", ch);

  printf ("\n ch >> 1 = %d\n", ch >> 2);
  printf ("\n ch << 1 = %d\n", ch << 2);



  return 0;
}

#include <stdio.h>
int main ()
{
  char ch, bin;



  printf ("\nEnter value of char\n");
  scanf (" %d", &ch);

  printf ("\nValue of char : %d", ch);

while (ch>0){
    
    ch = ch>>1;
    
  printf("1");
}
  
  
  
  #include <stdio.h>
int main ()
{
 char ch, c, atlikums;

  printf("Ievadiet decimālskaitli\n");
  scanf("%d", &ch);
  printf("\n Jūs ievadījāt decimālskaitl %d:\n", ch);
  
    for (c = 3; c >= 0; c--)
  {
    atlikums = ch >> c;

    if (atlikums & 1)
      printf("1");
    else
      printf("0");
  }

  printf("\n");

  return 0;
}
  
