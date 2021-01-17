  
#include <stdio.h>
#include <math.h>



void main(){
    float a, b, d, B, eps, h,h1,h2, interg1=0, interg2,S1,S2,x,x1,integral,intergral;
 
    int k,n=2,i,i1;
   
   printf("Šī programma aprēķina sin(x/2) integrāli,\n");
 printf("Ievadiet zemāko robežu: ");
 scanf(" %f", &a);
 printf("Ievadiet augstāko robežu: ");
 scanf(" %f", &b);
 printf("Cik daļās sadalīt intervālu: ");
 scanf(" %f", &d);//uz int
  printf("Ievadiet precizitātes vērtības iegūšanu : ");
   scanf("%f",&eps);
  
  float iedalja = (b-a)/n;
  
  
  
   
   
 // Taisnstūra metode
  float aRECT = a;
  float xRECT=aRECT;
  float integralisRECT = 0;
  while(xRECT<b) 
    { 
        xRECT+=iedalja;
        integralisRECT+=(xRECT- aRECT)*(sin(xRECT/2));
         aRECT=xRECT;
    }
       printf("Integralis, izmantojot taisnstura, metodi ir %f\n", integralisRECT);

  
 
  float integralisTRAP = 0;
  float summa=0;
  //Trapeces metode
   h1=fabs(b-a)/d;
   for(i=1;i<d;i++){
    x=a+i*h1;
    summa=summa+sin(x/2);
    
  }
  integralisTRAP=(h1/2)*(sin(a/2)+sin(b/2)+2*summa);
  printf("Integralis, izmantojot trapeces, metodi ir  %f\n",integralisTRAP);
 
  
  
  //Simspon metode sakums
  float integralisSIMP = 0;
  float sumSIMP=0;
   h2=fabs(b-a)/d;
  for(i1=1;i1<d;i1++){
    x1=a+i1*h2;
    if(i1%2==0){
      sumSIMP=sumSIMP+2*sin(x1/2);
    }
    else{
      sumSIMP=sumSIMP+4*sin(x1/2);
    }
  }
  integralisSIMP =(h2/3)*(sin(a/2)+sin(b/2)+sumSIMP);
  printf("Integralis, izmantojot Simpsona, metodi ir : %f\n",integralisSIMP);
  
  
  

}
