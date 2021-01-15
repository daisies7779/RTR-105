#include<stdio.h>
#include<math.h>
int main () {
	float a=0.01, b=1.5*M_PI, x, delta_x=1.e-3, funkca, funkcb, funkcx;
	int k=0;
	
	funkca = sin(a);
	funkcb = sin(b);
	
	if(funkca*funkcb>0){
		printf("Intervala [%.2f;%.2f] sin(x) funkcijai", a,b);
		printf("saknju nav (vai taja ir para saknju skaits) \n");
		return 1;
	}
	
	printf("               sin(%7.3f)=%7.3f\t\t\t\t", a,sin(a));
	printf("sin(%7.3f)=%7.3f\n",b, sin(b));
	
	while((b-a)>delta_x){
		k++;
		x=(a+b)/2.;
		//pie a=0 -> funkca=0 -> reizinajums ir precizi 0 -> b=x
		if(funkca*sin(x)>0){
			a=x;
		}
		else {
			b=x;
		}
		
		printf("%2d. iteracija: sin(%7.3f)=%7.3f\t", k,a,sin(a));
		printf("sin(%7.3f)=%7.3f\t", x,sin(x));
		printf("sin(%7.3f)=%7.3f\n", b,sin(b));
	}
	
 printf("Sakne atrodas pie x=%.3f, jo sin(x) ir %.3f\n", x,sin(x));
	
 return 0;
 }
