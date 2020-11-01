#include <stdio.h>
int main ()
{
    
    /* 
  int a, b, c, seciba;
  int token_big, token_middle, token_small;
  
  // Pirmā programmas daļa kārto decimālskaitļus

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
      //Kārto augošā secībā
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
    printf ("augošā secībā: mazākais= %d vidējais= %d lielākais= %d \n", token_small, token_middle, token_big);

  }
  
  else if (seciba==0)
  {
      //Kārto dilstošā secībā
      
      if (a <= b && b <= c) {
          token_small = a;
          token_middle = b;
          token_big = c;
      }
      else if (a <= b && b > c) {
          token_small = a;
          token_middle = c;
          token_big = b;
          
      } 
      else if (b < a && a <= c) {
          token_small = b;
          token_middle = a;
          token_big = c;
          
      }
      else if (b < a && a > c) {
          token_small = b;
          token_middle = c;
          token_big = a;
          
      }  
      else if (c < a && a <= b) {
          token_small = c;
          token_middle = a;
          token_big = b;
          
      }
      else if (c < a && a > b) {
          token_small = c;
          token_middle = b;
          token_big = a;
          
      }
    printf ("dilstošā secībā: lielākais= %d vidējais= %d mazākais= %d \n", token_big, token_middle, token_small);
      
  }
  // Ja programmas loģikā ir tomēr kļūda, vai nekorekti ievadīta vērtība, piemēram, ievadīts burts vai simbols,
  // paziņos par kļūdu
  else {printf("Programmā ir ielavījusies kļūda!");
      
  }
  */
  
  // Otrā programmas daļa kārto burtus

  char d, e, f, kartiba;
  char token_jaunakais, token_videjais, token_vecakais;
  

  printf ("Ievadiet burtu\n");

  scanf ("%c", &d);
  
  printf ("Ievadiet burtu\n");

  scanf ("%c", &e);
  
  printf ("Ievadiet burtu\n");

  scanf ("%c", &f);
	
	
  printf ("Jūs ievadījāt,burtu1 %c burtu2 %c burtu3 %c \n", d,e,f);
  printf ("Lai kārtotu alfabēta secībā ievadiet burtu A \n");
  printf ("Lai kārtotu pretēji alfabēta secībai ievadiet burtu Z \n");
  scanf ("%c", &kartiba);
  
  printf ("Programma kārtos %c rezima \n", &kartiba);
  
  
  return 0;
}
