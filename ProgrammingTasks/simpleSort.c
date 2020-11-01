#include <stdio.h>
int main ()
{
  int a, b, c, seciba;
  int token_big, token_middle, token_small;

  printf ("Ievadiet decimālskaitli\n");

  scanf ("%d", &a);
  
  printf ("Ievadiet decimālskaitli\n");

  scanf ("%d", &b);
  
  printf ("Ievadiet decimālskaitli\n");

  scanf ("%d", &c);
	
	
  printf ("Jūs ievadījāt, a = %d b = %d c = %d \n", a,b,c);
  printf ("Lai kārtotu augošā secībā ievadiet skaitli 1, lai dilstošā 0 \n");
  scanf ("%d", &seciba);
  
  if (seciba==1) {
      printf("true\n");
      if (a >= b && b >= c) {
          token_big = a;
          token_middle = b;
          token_small = c;
      }
      else if (a >= b && b < c) {
          token_big = a;
          token_middle = c;
          token_small = b;
          
      } 
      else if (b > a && a >= c) {
          token_big = b;
          token_middle = a;
          token_small = c;
          
      }
      else if (b > a && a < c) {
          token_big = b;
          token_middle = c;
          token_small = a;
          
      }  
      else if (c > a && a >= b) {
          token_big = c;
          token_middle = a;
          token_small = b;
          
      }
      else if (c > a && a < b) {
          token_big = c;
          token_middle = b;
          token_small = a;
          
      }
  }
  
  else if (seciba==0)
  {
      
  }
  else {printf("Programmā ir ielavījusies kļūda!");}
  
  printf ("c =%d b=%d a=%d", token_big, token_middle, token_small);

  return 0;
}
