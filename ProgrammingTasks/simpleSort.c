#include <stdio.h>
int main ()
{

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
	
  printf ("Skaitli tiek kārtoti %d režīmā\n", seciba);
	
	
  if (seciba==1) {
      //Kārto augošā secībā
      if (a >= b && b >= c) {
          token_big = a;
          token_middle = b;
          token_small = c;
      }
      else if (a >= c && c > b) {
          token_big = a;
          token_middle = c;
          token_small = b;
          
      } 
      else if (b >= a && a >= c) {
          token_big = b;
          token_middle = a;
          token_small = c;
          
      }
      else if (b >= c && c >= a) {
          token_big = b;
          token_middle = c;
          token_small = a;
          
      }  
      else if (c >= a && a >= b) {
          token_big = c;
          token_middle = a;
          token_small = b;
          
      }
      else if (c >= b && b >= a) {
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
      else if (a <= c && c < b) {
          token_small = a;
          token_middle = c;
          token_big = b;
          
      } 
      else if (b <= a && a < c) {
          token_small = b;
          token_middle = a;
          token_big = c;
          
      }
      else if (b < c && c < a) {
          token_small = b;
          token_middle = c;
          token_big = a;
          
      }  
      else if (c < a && a < b) {
          token_small = c;
          token_middle = a;
          token_big = b;
          
      }
      else if (c < b && b < a) {
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

  // Otrā programmas daļa kārto burtus
  char d, e, f, kartiba;
  char token_sakums, token_vidus, token_beigas;
  

  printf ("\nUzdevuma otrā daļa\n");
  printf ("\nIevadītajiem burtiem ir jābūt vai nu visiem LIELAJIEM vain nu visiem mazajiem\n");
  printf ("Ievadiet pirmo burtu\n");

  scanf (" %c", &d);
  
  printf ("Ievadiet otro burtu\n");

  scanf (" %c", &e);
  
  printf ("Ievadiet trešo burtu\n");
  
  scanf (" %c", &f);


	
	
  printf ("\nLai kārtotu alfabēta secībā ievadiet burtu A vai a \n");
  printf ("Lai kārtotu pretēji alfabēta secībai ievadiet burtu Z vai z \n");
  scanf (" %c", &kartiba);
  printf ("\n Programma kārtos %c rezima \n", kartiba);
	
  	
   
    if (kartiba=='A' || kartiba=='a') {
      //Kārto alfabēta secībā
      
      if ((int)d <= (int)e && (int)e <= (int)f) {
          token_sakums = d;
          token_vidus = e;
          token_beigas = f;
      }
      else if ((int)d <= (int)f && (int)f < (int)e) {
          token_sakums = d;
          token_vidus = f;
          token_beigas = e;
          
      } 
      else if ((int)e <= (int)d && (int)d < (int)f) {
          token_sakums = e;
          token_vidus = d;
          token_beigas = f;
          
      }
      else if ((int)e < (int)f && (int)f < (int)d) {
          token_sakums = e;
          token_vidus = f;
          token_beigas = d;
          
      }  
      else if ((int)f < (int)d && (int)d < (int)e) {
          token_sakums = f;
          token_vidus = d;
          token_beigas = e;
          
      }
      else if ((int)f < (int)e && (int)e < (int)d) {
          token_sakums = f;
          token_vidus = e;
          token_beigas = d;
          
      }
   printf ("Alfabēta secībā: %c   %c  %c \n", token_sakums, token_vidus, token_beigas);
  }

  else if (kartiba=='Z' || kartiba=='z')
  {
      //Kārto pretēji alfabēta secībai
	
      
      if ((int)d >= (int)e && (int)e >= (int)f) {
          token_sakums = d;
          token_vidus = e;
          token_beigas = f;
      }
      else if ((int)d >= (int)f && (int)f > (int)e) {
          token_sakums = d;
          token_vidus = f;
          token_beigas = e;
          
      } 
      else if ((int)e >= (int)d && (int)d > (int)f) {
          token_sakums = e;
          token_vidus = d;
          token_beigas = f;
          
      }
      else if ((int)e > (int)f && (int)f > (int)d) {
          token_sakums = e;
          token_vidus = f;
          token_beigas = d;
          
      }  
      else if ((int)f > (int)d && (int)d > (int)e) {
          token_sakums = f;
          token_vidus = d;
          token_beigas = e;
          
      }
      else if ((int)f > (int)e && (int)e > (int)d) {
          token_sakums = f;
          token_vidus = e;
          token_beigas = d;
          
      }
    printf ("pretēji Alfabēta secībai: %c   %c  %c \n", token_sakums, token_vidus, token_beigas);
      
  }
  // Ja programmas loģikā ir tomēr kļūda, vai nekorekti ievadīta vērtība, piemēram, ievadīts burts vai simbols,
  // paziņos par kļūdu
  else {printf("Programmā ir ielavījusies kļūda!");
      
  }
	
	printf("\n Programma beidz darbu!");
  
  return 0;
}
