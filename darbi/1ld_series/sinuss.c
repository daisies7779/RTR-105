#include<stdio.h>
#include<math.h>

double mans_sinuss(double x){
  double a,S;
  int k=0;
  
  a=pow(-1,k)*pow(x,2*k+1)/(2*1.);
  S=a;
  
  printf("Nr.\targuments\ta\t Summa\n");
  printf("%3d %8.2f\t %8.4f\t %.2f\n",k, x, a,S); 
  
  
  while(k<500){
   k++;
   a = a * (-1)*x*x/(4*(2*k)*(2*k+1));
   S = S+a;
    if ((k<6)||(k>498))
   //printf("%d %.2f\t%8.2f\t%8.2f\n",k, x, a,S); 
   printf("%3d %8.2f\t %8.4f\t %.5f\n",k, x, a,S); 
  }
  
  return S;
  
}

void zimesana(double x){
     
     // 92 is \ backslahs ASCII value 47 / forwardslash
    //rekurences reizinatajs:  (-1)*x*x/(4*(2*k)*(2*k+1));
    printf("\n%17s", "k=500");
    printf("\n%17s", "-------");
    printf("\n%12c         k          2*k+1)",92);
    printf("\n%13c      (-1) * (0.5*x)",92);
    printf("\n sin(%.2f/2) = >   ______________",x);
    printf("\n%13c          (2*k+1)!",47);
    printf("\n%12c",47);
    printf("\n%17s", "-------");
    printf("\n%15s", "k=0");
    
}

void main(){
  double x, y, yy;
  
  printf("Sin(x/2) aprekinasana:\n");
  printf("Ievadiet argumentu x (radianos): ");
  scanf(" %lf", &x);
  
  y=sin(x/2);
  yy=mans_sinuss(x);
  
  printf("\nstandarta funkcijas sin(x/2) y=sin(%.2f/2)=%.2f\n", x, y);
  printf("lietotaja funkcija y=mans_sinuss(%.2f/2)=%.2f\n", x, yy);
  
  
  zimesana(x);

}
