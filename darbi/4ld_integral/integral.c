#include<stdio.h>
#include<math.h>

void integralRectangle(double a, double b, double iedalja)
{
    double x=a, integralis = 0;
    
    while(x<b) 
    { // Taisnstūra metode
        x+=iedalja;
        integralis+=(x-a)*(sin(x/2));
        a=x;
    }
       printf("Integralis, izmantojot taisnstura, metodi ir %lf\n", integralis);
}


void integralTrapece(double a, double b, double iedalja)
{
    double x = a, integralis = 0;
    while(x<b)
    { 
        x += iedalja;
        integralis +=(sin(x/2)+sin(a/2))/2*(x-a);
        a= x;
    }
    
    printf("Integralis, izmantojot trapeces metodi, ir %lf\n", integralis);
}


int main(){
 double a, b, x, iedalja;
 int n;
 
 printf("Šī programma aprēķina sin(x/2) integrāli,\n");
 printf("Ievadiet zemāko robežu: ");
 scanf(" %lf", &a);
 printf("Ievadiet augstāko robežu: ");
 scanf(" %lf", &b);
 printf("Cik daļās sadalīt intervālu: ");
 scanf(" %d", &n);
 
 iedalja = (b-a)/n;
 
 //integralRectangle(a,b,iedalja);
 integralTrapece(a,b,iedalja);
// integralSimpson(a,b,iedalja);
 
  return 0;
 
 /*
 
 FILE * dataFile;
 dataFile = fopen("derivative.dat","w");
 fprintf(dataFile,"  x\t  sin(x/2)  anal_sin\'(x/2)   difer_sin\'(x/2)   anal_sin\'\'(x/2)  difer_sin\'\'(x/2)\n");
 
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
  
  
  
  fprintf(dataFile,"%.2lf\t%.2lf\t\t%.3lf\t\t\t%.3lf\t\t\t%.4lf\t\t\t%.4lf\n", x, y, y_1_analitiski, y_1_diferencejot, y_2_analitiski,  y_2_diferencejot);
  
  x+=delta_x;
  }
  
  //aizver failu
  fclose(dataFile);
  */

}
