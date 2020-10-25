#include <stdio.h>

int
main ()
{
  long int a, b;
  printf ("Ievadiet skaitli 400 000 tukstosi: \n");
  scanf ("%ld", &a);
  printf ("Ievadiet skaitli 100 000 tukstosi: \n");
  scanf ("%longd", &b);
  printf ("Skaitlu reizinajums ir vienads ar %ld: \n", b*a);

  return 0;
}
