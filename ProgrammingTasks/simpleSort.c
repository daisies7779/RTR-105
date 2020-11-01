#include <stdio.h>
int main ()
{
  int a, b, c;

  printf ("Ievadiet decimālskaitli\n");

  scanf ("%d", &a);
  
  printf ("Ievadiet decimālskaitli\n");

  scanf ("%d", &b);
  
  printf ("Ievadiet decimālskaitli\n");

  scanf ("%d", &c);
	
	
  printf ("Jūs ievadījāt, a = %d b = %d c = %d \n", a,b,c);
  printf ("Lai kārtotu augošā secībā ievadiet skaitli 1, lai dilstošā 0");
  scanf ("%d", &seciba);
  
  if (seciba) {
      if (a>b>c) {printf ("%d %d %d", a, b, c)}
  }

  return 0;
}
