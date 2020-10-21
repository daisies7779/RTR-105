#include <stdio.h>

int
main ()
{
  int a, b, c, s;

  printf ("Ievadiet pirmo veselo skaitli:\n");
  scanf ("%d", &a);
  printf ("Ievadiet otro veselo skaitli:\n");
  scanf ("%d", &b);
  printf ("Ievadiet treso veselo skaitli:\n");
  scanf ("%d", &c);
  printf ("JE+s ievadD+jDs skaiD<us %d, %d, %d \n", a, b, c);
  printf
    ("Ja velaties sakartot augosa seciba ievadiet 1, ja dilstosa - 0 \n");
  scanf ("%d", &s);
  if (s == 1)
    {
      if (a >= b)
	{
	  if (b >= c)
	    {
	      printf ("Skaitli sakarotit augusi %d, %d, %d", a, b, c);

	    }
	  else if (b > a)
	    {
	      if (a >= c)
		{
		  printf ("Skaitli sakarotit augusi %d, %d, %d", b, a, c);

		}
	    }

	  else if (c >= a)
	    {
	      if (a >= b)
		{
		  printf ("Skaitli sakarotit augusi %d, %d, %d", c, a, b);

		}
	    }
	  else if (c >= b)
	    {
	      if (b >= a)
		{
		  printf ("Skaitli sakarotit augusi %d, %d, %d", c, b, a);

		}
	    }
	}

    }
	printf ("beigas \n");
      return 0;
    }
