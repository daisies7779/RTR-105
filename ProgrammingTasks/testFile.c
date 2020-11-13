#include <stdio.h>
int main() {
    
    // lietotāja ievadīts decimālskaitlis
    int i;
    
    // izvēlētais aprēķināmā faktoriāla datu tips
    char tips;
    
    
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
     char ieprieks =1;
     printf("\nIegaja CHAR\n");
     printf("Rekinam fact skailim %d \n", i);
     
     // cikls rēķina fatkoriālu no beigām, lai ātrāk sasniegtu kritisko robežu
     // tāpēc, piemēram, (n-1)! īstenībā nav faktoriāls bet tā atpakaļgaita, piem 9*8*7...
     // tas nīzmē, ka kodā nav īsti korektu saukt fact par faktoriālu, kamēr  tas nav pilnībā izrēķināts,
     //  taču šinī uzdevumā precīzai matemātiskai terminoloģijai nav principiālas nozīmes.
     for (i; i>=1; i--)
     {
       
       
       fact *= i;
      printf("Vai aprēķinātā n! dalījums ar n ir vienāds ar (n-1)!? %d \n", (fact/i)==ieprieks);
      // Ja aprēķinātā n! dalījums ar n NAV VIENĀDS ar (n-1)! tad ir pārsniegta datu tipa robeža
      if ((fact/i)!=ieprieks) {printf("Char datu tipam faktoriālu nevar aprēķināt"); break;}
        
       ieprieks = fact;
       printf("tekosa vertiba n! %d \n", fact);
       printf("iepriekseja vertiba (n-1)! %d \n", ieprieks);
  
       
     }
   //Arī kļūdas gadījumā rādīs aprēkināto vērtību, iemesls, kāpēc atstāju opciju redzēt vērtību arī   
   // kļūdas gadījumā, lai var redzēt, ka tiešām kaut kas ne tā aizgāja.
  printf("\nFaktoriāls = %d",  fact);
     
   }

  else if (tips == 'i') 
  {
     int  fact = 1;
     int ieprieks =1;
     printf("\nIegaja INT\n");
     printf("Rekinam fact skailim %d \n", i);
     
     
     for (i; i>=1; i--)
     {
      
       fact *= i;
      printf("Vai aprēķinātā n! dalījums ar n ir vienāds ar (n-1)!? %d \n", (fact/i)==ieprieks);
      // Ja aprēķinātā n! dalījums ar n NAV VIENĀDS ar (n-1)! tad ir pārsniegta datu tipa robeža
      if ((fact/i)!=ieprieks) {printf("Int datu tipam faktoriālu nevar aprēķināt"); break;}
        
       ieprieks = fact;
       printf("tekosa vertiba n! %d \n", fact);
       printf("iepriekseja vertiba (n-1)! %d \n", ieprieks);
       
     }
   //Arī kļūdas gadījumā rādīs aprēkināto vērtību, iemesls, kāpēc atstāju opciju redzēt vērtību arī   
   // kļūdas gadījumā, lai var redzēt, ka tiešām kaut kas ne tā aizgāja.
  printf("\nFaktoriāls = %d",  fact);
    
  }
  
   else if (tips == 'l') 
  {
     
     long long  fact = 1;
     long long ieprieks =1;
     printf("\nIegaja LONG\n");
     printf("Rekinam fact skailim %d \n", i);
     
     
     for (i; i>=1; i--)
     {
      fact *= i;
      printf("Vai aprēķinātā n! dalījums ar n ir vienāds ar (n-1)!? %d \n", (fact/i)==ieprieks);
      // Ja aprēķinātā n! dalījums ar n NAV VIENĀDS ar (n-1)! tad ir pārsniegta datu tipa robeža
      if ((fact/i)!=ieprieks) {printf("Long datu tipam faktoriālu nevar aprēķināt"); break;}
        
       ieprieks = fact;
       printf("tekosa vertiba n! %lld \n", fact);
       printf("iepriekseja vertiba (n-1)! %d \n", ieprieks);
       
       
     }
   //Arī kļūdas gadījumā rādīs aprēkināto vērtību, iemesls, kāpēc atstāju opciju redzēt vērtību arī   
   // kļūdas gadījumā, lai var redzēt, ka tiešām kaut kas ne tā aizgāja.
  printf("\nFaktoriāls = %lld",  fact);
  }
  
  else {printf("Ievadiet korektu datu formātu!");}
  
     return 0;
}
