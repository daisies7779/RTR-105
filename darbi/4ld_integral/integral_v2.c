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
 
 integralRectangle(a,b,iedalja);
 integralTrapece(a,b,iedalja);
// integralSimpson(a,b,iedalja,n);
 
  return 0;
 
 

}
