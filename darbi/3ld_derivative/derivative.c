#include<stdio.h>
#include<math.h>


int main(){
 float a, b, x, delta_x, y, y_pirmais_analitiski, y_pirmais_diferencejot, y_otrais_analitiski, y_otrais_diferencejot;
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
 
 
 while(x<=b){
  if(x>b) break;
  
  //funkcijas vertiba pie argumenta x
  y=sin(x/2);
  
  y_pirmais_analitiski = 0.5*cos(x/2);
  
  y_otrais_analitiski = -0.25*sin(x/2);
  
  y_pirmais_diferencejot = (sin(x/2+delta_x)-sin(x/2))/delta_x);
  
  y_otrais_diferencejot = ((sin(x/2+2*delta_x)-2*sin(x/2+delta_x) -sin(x/2))/pow(delta_x,2));
   
   
  
  
 //y = sin(x);
 printf("%10.2f\t%10.2f\t%10.2f\n", x,sin(x), (sin(x+delta_x)-sin(x))/delta_x);
  
  //printf("%10.2f\t%10.2f\n", x,y);
  x+=delta_x;
  }
  
  //aizer failu
  fclose(dataFile);

}
