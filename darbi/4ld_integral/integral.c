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

void integralSimpson(double a, double b, double iedalja, int n)
{
      //Simspon metode sakums
    double h2, sum1,  intergral;
    int i1, x1;
   h2=fabs(b-a)/n;
  for(i1=1;i1<n;i1++){
    x1=a+i1*h2;
    if(i1%2==0){
      sum1=sum1+2*sin(x1/2);
    }
    else{
      sum1=sum1+4*sin(x1/2);
    }
  }
  intergral=(h2/3)*(sin(a/2)+sin(b/2)+sum1);
  printf("Simpsonas metodes intergrala vertiba : %f\n",intergral);
  //beigas
}

/*
void integralSimpson(double a, double b, double iedalja, int n)
{
    //avots
    //https://www.bragitoff.com/2017/08/simpsons-13-rule-c-program/#:~:text=Simpson's%20Rule%20is%20a%20Numerical,function%20within%20a%20given%20interval.&text=And%20the%20area%20is%20then,the%20better%20is%20the%20approximation.
    
    double h, x, sum, integralis;
    int i;
    /*Begin Simpson's Procedure: 
  h=fabs(b-a)/n;
  for(i=1;i<n;i++){
    x=a+i*h;
    if(i%2==0){
      sum=sum+2*sin(x/2);
    }
    else{
      sum=sum+4*sin(x/2);
    }
  }
  integralis=(h/3)*(sin(a/2)+sin(b/2)+sum);
    
    printf("Integralis, izmantojot Simpsona 1/3 metodi, ir %lf", integralis);   
} */


/*simpIntegral(a,b,increment, n);
void integralSimpson(double a, double b, double iedalja, int n)
{
    double integralis = 0;
    double x;
    int i;
    for(i=0;i<n;i++);
    {
        integralis += 4*sin((a+i*iedalja)/2)+2*sin((a+(1+i)*iedalja)/2);
    }
    
    integralis*=(1.0/3);
    
    printf("Integrālis izmantojot Simpsona 1/3 metodi ir %lf", integralis);
    
}*/


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
 integralSimpson(a,b,iedalja,n);
 
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
