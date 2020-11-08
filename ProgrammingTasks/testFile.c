#include <stdio.h>
int main() {
    
    // lietotaja ievadits deicmalskaitlis, tiek pienemts ka tas nebus parak liels, dēļ ierobežotās skaitļošanas jaudas
    int i;
    
    // izvēlētais aprēķināmā faktoriāla datu tips
    char tips;
    
    //ja mazāks par kluda, tad pec salidzinasanas operacijas, secinas ka ir kluda.
    long long kluda = 0;
    
    printf("Ievadiet veselu decimālskaitli: ");
    scanf("%d", &i);
  
    printf("Izvelieties faktoriala datu tipu - c (char), i (int), l (long long int): ");
    scanf(" %c", &tips);
  
  
   if (tips == 'c') 
   {
     char fact = 1;
     printf("\nIegaja CHAR\n");
     
     for (i; i>=1; i--)
     {
       
       printf("vertiba %d \n", fact);
       fact *= i;
       
     }
     
  printf("\nFaktoriāls = %d",  fact);
     
   }

  else if (tips == 'i') 
  {
      int fact = 1;
      for (i; i>=1; i--)
     {
       printf("Iegaja INT");
       fact *= i;
       
     }
    
  printf("\nFaktoriāls = %d",  fact);
    
  }
  
   else if (tips == 'l') 
  {
     long long fact = 1;
     for (i; i>=1; i--)
     {
       printf("Iegaja LONG");
       fact *= i;
       
     }
     
  printf("\nFaktoriāls = %lld",  fact);
    
  }
  
  else {printf("Ievadiet korektu datu formātu!");}
  
     return 0;
}
