#include <stdio.h>
int main() {
    
    // lietotāja ievadīts decimālskaitlis
    int i;
    
    // izvēlētais aprēķināmā faktoriāla datu tips
    char tips;
    
    //ja mazāks par kluda, tad pec salidzinasanas operacijas, secinas ka ir kluda.
    long long kluda;
    //long long ieprieks;
    
    printf("Ievadiet decimālskaitli, lielāku vai vienādu ar nulle: ");
    scanf("%d", &i);
    
    //nav pretrunas ar uzdevuma nosacījumiem, jo FAKTORIĀLA vērtība ar nulli netiek salīdzināt. Tā vispār netiek rēķināta, 
    //jo negatīvs skaitlis neitilpst definīcijas apgabalā.
    if(i<0){printf("No negatīva skaitļa faktoriālu nerēķina!"); return 0;}
  
    printf("Izvelieties faktoriala datu tipu - c (char), i (int), l (long long int): ");
    scanf(" %c", &tips);
  
  
  
  
   if (tips == 'c') 
   {
     char fact = 1;
     kluda = 0;
     char ieprieks =1;
     printf("\nIegaja CHAR\n");
     printf("Rekinam fact skailim %d \n", i);
     
     for (i; i>=1; i--)
     {
       
       
       fact *= i;
      printf("Vai n!/n ? (n-1)! %d \n", (fact/i)==ieprieks);
      if ((fact/i)!=ieprieks) {printf("!!!!Char datu tipam faktoriālu nevar aprēķināt"); break;}
        
       ieprieks = fact;
       printf("tekosa vertiba %d \n", fact);
       printf("iepriekseja vertiba %d \n", ieprieks);
       
       
       // kluda satur iepriekšējo faktoriāla vērtību, savukārt
       // ja tiks pārsniegt datu tips, tad mainīgais fact iegūst negatīvu vai mazāku vērtību par kluda
       if (fact < kluda) {printf("Char datu tipam faktoriālu nevar aprēķināt"); break;}
       kluda = fact;
       
     }
   //Arī kļūdas gadījumā rādīs aprēkināto vērtību, iemesls, kāpēc atstāju opciju redzēt vērtību arī   
   // kļūdas gadījumā, lai var redzēt, ka tiešām kaut kas ne tā aizgāja.
  printf("\nFaktoriāls = %d",  fact);
     
   }

  else if (tips == 'i') 
  {
     int fact = 1;
     kluda = 0;
     printf("\nIegaja INT\n");
     
     for (i; i>=1; i--)
     {
       printf("REIZINATAJS %d \n", i);
       printf("vertiba %d \n", fact);
       fact = fact*i;
       if (fact < kluda) {printf("Int datu tipam faktoriālu nevar aprēķināt"); break;}
       kluda = fact;
       
     }
   //Arī kļūdas gadījumā rādīs aprēkināto vērtību, iemesls, kāpēc atstāju opciju redzēt vērtību arī   
   // kļūdas gadījumā, lai var redzēt, ka tiešām kaut kas ne tā aizgāja.
  printf("\nFaktoriāls = %d",  fact);
    
  }
  
   else if (tips == 'l') 
  {
     long long fact = 1;
     kluda = 0;
     printf("\nIegaja LONG\n");
     
     for (i; i>=1; i--)
     {
       printf("REIZINATAJS %d \n", i);
       printf("vertiba %lld \n", fact);
       fact = fact*i;
       if (fact < kluda) {printf("Int datu tipam faktoriālu nevar aprēķināt"); break;}
       kluda = fact;
       
     }
   //Arī kļūdas gadījumā rādīs aprēkināto vērtību, iemesls, kāpēc atstāju opciju redzēt vērtību arī   
   // kļūdas gadījumā, lai var redzēt, ka tiešām kaut kas ne tā aizgāja.
  printf("\nFaktoriāls = %lld",  fact);
  }
  
  else {printf("Ievadiet korektu datu formātu!");}
  
     return 0;
}
