#include <stdio.h>
int main ()
{
  char skaitlis, pozicija, atlikums;

  printf ("Ievadiet decimālskaitli\n");
 // skaitlis deklarēts kā char, tāpēc tam jābūt robežā no -128 līdz 127	
  scanf ("%d", &skaitlis);

/* Bitwise >> operācija ir ekvivalenta dalījumam ar divi.
mainīgais - atlikums - ir tā bitu virkne, kas palika baitā pēc bitwise operācijas.
operācija (atlikums & 1) salīdzinās PĒDĒJO bitu mainīgā atlikums virknē ar 1. Tādejādi operācija ģenerēs 0, ja atlikuma pēdējais bits ir nulle, vai 1 ja pēdējais bits ir viens.
Lai realizētu dec to bin, ideja ir tajā, ka skaitļa bitus vajag cikliski pārbīdīt pa labi, katrā ciklā samazinot pārbīdāmo pozīciju daudzumu no 7 līdz 0.
Nulles pārbīde nepieciešama, lai salīdzināt pašu pēdējo bitu bez pārbīdēm.
Kopumā tādejādi būs veiktas 7+0 = 8 iterācijas, kas simbolizēs vienu baitu. Baits - tik liels ir char tipa decimālskaitlis.
*/	
	
	
  for (pozicija = 7; pozicija >= 0; pozicija--)
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
