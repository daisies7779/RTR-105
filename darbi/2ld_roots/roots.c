  
#include<stdio.h>
#include<math.h>

float modified_sin(float x, float A){
	return sin(x/2)-A;
}

int main () {
	//float a=0.01, b=3*M_PI, x, delta_x=1.e-3, A=0, funkca, funkcb, funkcx;
	float a, b, x, delta_x, A, funkca, funkcb, funkcx;
	int k=0;
	
	printf("Programma mekle sin(x/2)=A sakni.\n");
	printf("Ievadiet ZEMAKO robezu, ta nedrikst but nulle\n");
	scanf(" %f", &a);
	printf("Ievadiet AUGSTAKO robezu.\n");
	scanf(" %f", &b);
	printf("Ievadiet skaitli A: ");
        scanf(" %f", &A);
        printf("Iievadiet precizitati:");
        scanf(" %f", &delta_x);
	
	funkca = modified_sin(a, A);
	funkcb = modified_sin(b, A);
	
	if(funkca*funkcb>0){
		printf("Intervala [%.2f;%.2f] sin(x) funkcijai ", a,b);
		printf("saknju nav (vai taja ir para saknju skaits) \n");
		return 1;
	}
	
	//printf("               sin(%7.3f)=%7.3f\t\t\t\t", a,modified_sin(a,A));
	//printf("sin(%7.3f)=%7.3f\n",b, modified_sin(b,A));
	
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
		
		//printf("%2d. iteracija: sin(%7.3f/2)-A=%7.3f\t", k,a,modified_sin(a,A));
		//printf("sin(%7.3f/2)-A=%7.3f\t", x,modified_sin(x,A));
		//printf("sin(%7.3f/2)-A=%7.3f\n", b,modified_sin(b,A));
	}
	
    printf("\nsin(x/2)= %lf, ja x = %lf ar lietotaja uzdoto precizitati %lf\n", A, x, delta_x);
    printf("funkcijas sin(x/2) vertiba sada gadijuma ir sin(%lf/2)=%lf\n",x, sin(x/2.));
    printf("Aprekina kluda ar sadu rekinasanas metodi sin(x/2)-A ir: %lf\n\n", modified_sin(x,A));
    printf("Uzdevuma veiksanai vajadzeja %d iteracijas.\n",k);
    //printf("Sakne atrodas pie x=%.3f, jo sin(x/2)-A ir %.3f\n", x,modified_sin(x,A));//no pasniedzejas parauga
	

 return 0;
 }
