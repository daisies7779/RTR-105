#include<stdio.h>
#include<math.h>

double mans_sinuss(double x){
  double a,S;
  int k=0;
  
  a=pow(-1,k)*pow(x,2*k+1)/(2*1.);
  S=a;
  
  printf("Nr.\targuments\ta\t Summa\n");
  printf("%3d %8.2f\t %8.4f\t %.2f\n",k, x, a,S); 
  
  FILE * printFile;
  printFile = fopen("dati.txt","w");
  while(k<500){
   k++;
   a = a * (-1)*x*x/(4*(2*k)*(2*k+1));
   S = S+a;
   
    //pariecinas ka a nav nulle
     if((fabs(a-a/pow(x,2)/(2*a*(2*a-1))) < 0.000001 ))
         {
   break;
  }
   
   if ((k<6)||(k>498)) 
   printf("%3d %8.2f\t %8.4f\t %.5f\n",k, x, a,S); 
    

  }
   fclose(printFile);
  return S;
  
}

void zimesana(double x){
     
     // 92 is \ backslahs ASCII value 47 / forwardslash
     // Zime Teilora rindu funkcijai sin(x/2) 
    printf("\n");
    printf("\n%17s", "k=500");
    printf("\n%17s", "-------");
    printf("\n%12c         k          2*k+1)",92);
    printf("\n%13c      (-1) * (0.5*x)",92);
    printf("\n sin(%.2f/2) = >   ______________",x);
    printf("\n%13c          (2*k+1)!",47);
    printf("\n%12c",47);
    printf("\n%17s", "-------");
    printf("\n%15s", "k=0");
    
    // Zime rekurences reizinataju:  (-1)*x*x/(4*(2*k)*(2*k+1));
    printf("\n");
    printf("\n                                   2");
    printf("\n                           (-1) * x");
    printf("\nRekurences reizinatajs:  _______________");
    printf("\n                         4*(2*k)*(2*k+1)");
    
}

void main(){
  double x, y, yy;
  
  printf("Sin(x/2) aprekinasana, x (pieder Realai sk.kopai):\n");
  printf("Ievadiet argumentu x (radianos): ");
  scanf(" %lf", &x);
  
  y=sin(x/2);
  yy=mans_sinuss(x);
  
  printf("\nstandarta funkcijas sin(x/2) y=sin(%.2f/2)=%.2f\n", x, y);
  printf("lietotaja funkcija y=mans_sinuss(%.2f/2)=%.2f\n", x, yy);
  
  // Zime ASCII simbolu koda summas izteiksmi un rekurences reizinataju
  zimesana(x);
  
  //Faila sarakstu mans_sinuss(x) datus lai tos attelto gnuplot un salidzinat ar standartfunkciju;
 // robezas no x=0 līdz 3.14 radiani
  FILE * printFile;
  printFile = fopen("dati.txt","w");
 
  float mans_x=0, mans_y=0, kapuma_solis=0.1;
  while(mans_x<3.14){
    
   mans_y= mans_sinuss(mans_x);
   mans_x+=kapuma_solis;
    
   fprintf(printFile,"%.4f    %.4f\n", mans_x, mans_y); 
    
 
   //printf("%3d %8.2f\t %8.4f\t %.5f\n",k, x, a,S); 
   
  }
   fclose(printFile);

}
