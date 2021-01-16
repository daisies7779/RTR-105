#include<math.h>
#include<stdio.h>

int main(){
 float a, b, x, delta_x, y, funkca, funkcb, funkcx;
 int k=0;
 
 printf("Šī programma aprēķina sin(x/2) prim1, prim2,\n izmantojot gan analītisko formulu, gan diferenic.\n");
 printf("Ievadiet zemāko robežu: ");
 scanf(" %f", &a);
 printf("Ievadiet augstāko robežu: ");
 scanf(" %f", &b);
 printf("Ievadiet par cik palielināt x katru ciklu: ");
 scanf(" %f", &delta_x);
 
 FILE * dataFile;
 dataFile = fopen("derivative.dat","w");
 
 
 while(x<b){
 //y = sin(x);
 printf("%10.2f\t%10.2f\t%10.2f\n", x,sin(x), (sin(x+delta_x)-sin(x))/delta_x);
  
  //printf("%10.2f\t%10.2f\n", x,y);
  x+=delta_x;
  }
  
  //aizer failu
  fclose(dataFile);

}
