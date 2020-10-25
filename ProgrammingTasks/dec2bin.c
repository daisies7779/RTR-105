#include <stdio.h>
int main ()
{
  char skaitlis, pozicija, atlikums;

  printf ("Ievadiet decimālskaitli\n");
 // skaitlis deklarēts kā char, tāpēc tam jābūt robežā no -128 līdz 127	
  scanf ("%d", &skaitlis);

/* Bitwise >> operācija ir ekfivalenta dalījumam ar divi.
operācija (atlikums & 1) ģenerēs 0, ja atlikums ir nulle, vai 1 ja atlikums ir viens.
Lai realizētu dec to bin, ideja ir tajā, ka skaitļa bitus vajag cikliski pārbīdīt pa labi, katrā ciklā samazinot pārbīdāmo pozīciju daudzumu no 8 līdz 0
*/	
	
	
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
