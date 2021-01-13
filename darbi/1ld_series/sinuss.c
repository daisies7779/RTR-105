#include<stdio.h>
#include<math.h>

double mans_sinuss(double x){
  double a,S;
  int k=0;
  
  a=pow(-1,k)*pow(x,2*k+1)/(2*1.);
  S=a;
  
  
  printf("%d %.2f\t%8.2f\t%8.2f\n", k, x, a,S);
  
  
  while(k<500){
   k++;
   a = a * (-1)*x*x/(4*(2*k)*(2*k+1));
   S = S+a;
    if ((k==1)||(k>498))
   printf("%d %.2f\t%8.2f\t%8.2f\n",k, x, a,S); 
  }
  
  return S;
  
}

void main(){
  double x, y, yy;
  
  printf("Sin/2 aprekinasana:\n");
  printf("Ievadiet argumentu x (radianos):");
  scanf(" %lf99", &x);
  y=sin(x/2);
  printf("standarta funkcijas sin(x/2) y=sin(%.2f/2)=%.2f\n", x, y);
  
  yy=mans_sinuss(x);
  printf("lietotaja funkcija y=mans_sinuss(%.2f/2)=%.2f\n", x, yy);

}
