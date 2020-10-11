#include<stdio.h>
void main()
 {
 char  a ;
 printf("Cienijamais lietotaj! Ludzu ievadit vienu burtu:"); 
 scanf("%c", &a);
 printf("Cienijamais, lietotaj! Tu esi ievadijis simbolu %c\n", a);
 printf("Cienijamais, lietotaj! Tu esi ievadijis simbolu, kura dec kods ir:  %d\n", a);
 printf("Cienijamais, lietotaj! Tu esi ievadijis simbolu, kura hex  kods ir:  0x%x\n", a);
 printf("Cienijamais, lietotaj! Tu esi ievadijis simbolu, kura oct  kods ir:  %o\n", a);
 printf("P.s. ka reals skaitlis:  %f\n", a);

 int  b ;
 printf("Cienijamais lietotaj! Ludzu ievadit vienu burtu!\n"); 
 scanf("%d", &b);
 printf("Cienijamais, lietotaj! Tu esi ievadijis simbolu %c\n", b);
 printf("Cienijamais, lietotaj! Tu esi ievadijis simbolu, kura dec kods ir:  %d\n", b);
 printf("Cienijamais, lietotaj! Tu esi ievadijis simbolu, kura hex  kods ir:  0x%x\n",b);
 printf("Cienijamais, lietotaj! Tu esi ievadijis simbolu, kura oct  kods ir:  %o\n", b);
 printf("P.s. ka reals skaitlis:  %f\n", b);

 double  c ;
 printf("Cienijamais lietotaj! Ludzu ievadit vienu burtu!\n"); 
 scanf("%lf", &c);
 printf("Cienijamais, lietotaj! Tu esi ievadijis simbolu %c\n", c);
 printf("Cienijamais, lietotaj! Tu esi ievadijis simbolu, kura dec kods ir:  %d\n", c);
 printf("Cienijamais, lietotaj! Tu esi ievadijis simbolu, kura hex  kods ir:  ox%x\n", c);
 printf("Cienijamais, lietotaj! Tu esi ievadijis simbolu, kura oct  kods ir:  %o\n", c);
 printf("P.s. ka reals skaitlis:  %f\n", c);
}
