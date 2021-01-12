//si ir mana parveidota versija
#include<stdio.h>
#include<math.h>

double mans_sinuss(double x){
  double a,S;
  int k=0;
  
  a=pow(-1,k)*pow(x,2*k+1)/(2*1.);
  S=a;
  printf("%.2f\t%8.2f\t%8.2f\n", x, a,S);
  
  while(k<50){
   k++;
   a = a * (-1)*x*x/(4*(2*k)*(2*k+1));
   S = S+a;
    if (k>49)
   printf("%.2f\t%8.2f\t%8.2f\n", x, a,S); 
  }
  
  return S;
  
}

void main(){
  double x=M_PI, y, yy;
  y=sin(x/2);
  printf("standarta funkcijas sin - y=sin(%.2f/2)=%.2f\n", x, y);
  
  yy=mans_sinuss(x);
    printf("lietotaja funkcijas - y=mans_sinuss(%.2f/2)=%.2f\n", x, yy);

}
