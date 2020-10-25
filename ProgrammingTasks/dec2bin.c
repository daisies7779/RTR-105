#include <stdio.h>
int main ()
{
  char skaitlis, pozicija, atlikums;

  printf ("Ievadiet decimDlskaitli\n");
  scanf ("%d", &skaitlis);
  for (pozicija = 8; pozicija >= 0; pozicija--)
    {
      atlikums = skaitlis >> pozicija;

      if (atlikums & 1)
	printf ("1");
      else
	printf ("0");
    }

  printf ("\n");

  return 0;
}
