#include<stdio.h>
#include<math.h>

float modified_sin(float x, float A){
	return sin(x/2)-A;
}

int main () {
	float a=0.01, b=1.5*M_PI, x, delta_x=1.e-3, A=1, funkca, funkcb, funkcx;
	int k=0;
	
	funkca = modified_sin(a, A);
	funkcb = modified_sin(b, A);
	
	if(funkca*funkcb>0){
		printf("Intervala [%.2f;%.2f] sin(x) funkcijai", a,b);
		printf("saknju nav (vai taja ir para saknju skaits) \n");
		return 1;
	}
	
	printf("               sin(%7.3f)=%7.3f\t\t\t\t", a,modified_sin(a,A));
	printf("sin(%7.3f)=%7.3f\n",b, modified_sin(b,A));
	
	while((b-a)>delta_x){
		k++;
		x=(a+b)/2.;
		//pie a=0 -> funkca=0 -> reizinajums ir precizi 0 -> b=x
		if(funkca*modified_sin(x,A)>0){
			a=x;
		}
		else {
			b=x;
		}
		
		printf("%2d. iteracija: sin(%7.3f)=%7.3f\t", k,a,modified_sin(a,A));
		printf("sin(%7.3f)=%7.3f\t", x,modified_sin(x,A));
		printf("sin(%7.3f)=%7.3f\n", b,modified_sin(b,A));
	}
	
 printf("Sakne atrodas pie x=%.3f, jo sin(x) ir %.3f\n", x,modified_sin(x,A));
	
 return 0;
 }
