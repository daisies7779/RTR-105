#include<stdio.h>
#include<math.h>

double mans_sinuss(double x){
  double a,S;
  int k=0;
  
  a=pow(-1,k)*pow(x,2*k+1)/(1.);
  S=a;
  printf("%.2f\t%8.2f\t%8.2f\n", x, a,S);
  
  
}
