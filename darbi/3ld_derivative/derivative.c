#include<stdio.h>
#include<math.h>


int main(){
 float a, b, x, delta_x, y, y_1_analitiski, y_1_diferencejot, y_2_analitiski, y_2_diferencejot, test;
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
 fprintf(dataFile,"  x\t  sin(x/2)  anal_sin\'(x/2)   difer_sin\'(x/2)   anal_si\"(x/2)  difer_sin\"(x/2)\n");
 
 while(x<=b){
  if(x>b) break;
  
  //funkcijas vertiba pie argumenta x
  y=sin(x/2);
  
  y_1_analitiski = 0.5*cos(x/2.);
  
  y_2_analitiski = -0.25*sin(x/2.);
  
  y_1_diferencejot = (sin((x+delta_x)/2.)-sin(x/2.))/delta_x;
  
   
 // y_2_diferencejot = (sin((x+2*delta_x)/2.)-2*sin((x+delta_x)/2.)-sin(x/2.))/pow(delta_x,2);
  // ar trigonometriskiem parveidojumiem vienkarso lidz cosinus funkcijai un tad tai rekina diferenci
  y_2_diferencejot  = 0.5*((cos((x+delta_x)/2.)-cos(x/2))/delta_x);
  
  
  
  fprintf(dataFile,"%.2lf\t%.2lf\t\t%.2lf\t\t\t%.2lf\t\t\t%.3lf\t\t\t%.3lf\n", x, y, y_1_analitiski, y_1_diferencejot, y_2_analitiski,  y_2_diferencejot);
  
   
   
  
  
 //y = sin(x);
// printf("%10.2f\t%10.2f\t%10.2f\n", x,sin(x), (sin(x+delta_x)-sin(x))/delta_x);
  
  //printf("%10.2f\t%10.2f\n", x,y);
  x+=delta_x;
  }
  
  //aizer failu
  fclose(dataFile);

}
