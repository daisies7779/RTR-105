#### Eksāmena uzdevums

Prezentācija glabājas manā githabrepozitorija, tur uzlabotie varianti:
https://github.com/daisies7779/RTR-105/commit/20c133b3cd11888113b22e28ded9c729d9951cf1

# Dabuju kodu
https://github.com/JrPhy/numerical/blob/master/Special%20function/special%20functions.c

## palaižu kodu

## kods rēķina faktoriālu līdz 10

## lasu kodu, neidziļinoties realizācija, bet aptveru ko kopumā var izdarīt proga

## bez faktoriāla proga realizē vēl dažādas f-jas: 
## uzreiz gūgloju katras funkcijas nosaukumu, wikipedia lasu, visvairāk interesē grafiki
## Beseļa, Beseļa atvasinājums,
## Neimaņa, Neimaņa atvasinājums
## faktoriālu (palaista no main )
## Lagranža 
https://en.wikipedia.org/wiki/Legendre_function
https://en.wikipedia.org/wiki/Legendre_polynomials
## GeneLegendre https://en.wikipedia.org/wiki/Associated_Legendre_polynomials
## atvasinājums pēc Lagranža

## uzlieku komentāru main esošajam factorial f-jas izsaukumam, atkomentēju Neimaņa, palaižu.
## nan palasu, ko izvērsi nozīmē not a number https://en.cppreference.com/w/c/numeric/math/NAN
## Nemaņa f-jas izsaukumā sākumā no radiāniem pāriet uz grādiem, tad izsauc pašu Neimaņa f-ju
https://en.wikipedia.org/wiki/Neumann_polynomial

## Palasu viņa github
## ir redzams, ka konkrētā koda fails ir lielāka projekta daļa, kurā tiek 
## pētītas dažādas skaitliskās metodes c valodas kodam

## eju dziļumā, skatos kā tieši realizētas funkcijas kodā.
## Beselim - nosakia robežu exp -6, lai mazi skaitļi nav nulle,
## fabs
The fabs() function takes a single argument (in double) and returns the absolute value of that number (also in double).
## rekurnece, rekurencē svarīgi iziet ārā no izsaukuma.

## OriginalLegendre
abs
http://www.cplusplus.com/reference/cstdlib/abs/
## gūglo fabs vs abs
https://stackoverflow.com/questions/33738509/whats-the-difference-between-abs-and-fabs
## matemātiskā jēga identiska, atšķirīga realizācija C koda abs for int, fabs decimālskaitļi

## koda funkcijas realizētas ar for ciklu, izmantota rekurence, skaitļa modulis, lai nodrošinātos
## pret vērtību zudumu pret mazu skaitli, izmantota epsilon vērtība (skailtis patiesība nav nulle).
## kodu uzlaboju, saglabājot datus data failā, lai var apskatīties gnu plot

## saglabāju šīs piezīmes un kodu savā github repozitorijā
https://github.com/daisies7779/RTR-105/commit/20c133b3cd11888113b22e28ded9c729d9951cf1
#### Kods, grafiks un to apraksts.
Kods papildināts main funkcijā:
```c
	#include<stdio.h>
#include<math.h>
#include<stdlib.h>
/*Define besseljn(z) */
double Besseljn(int n, double x)
{
	int i;
	double besselj0, besselj1, besseljn;
	if(fabs(x)<1e-6) 
	{
		besselj0 = 1.0;
		besselj1 = 0.0;
	}
	else 
	{
		besselj0 = sin(x)/x;
		besselj1 = sin(x)/(x*x)-cos(x)/x;
	}
	if (n == 0) return besselj0;
	else if(n == 1) return besselj1;
	/*using recurrence relation */
	else 
	{
		if(fabs(x)<1e-6) besseljn = 0.0;
		else
		{
			for(i=2; i<n+1; i++) 
			{
				besseljn = (2*i-1)*besselj1/x - besselj0;
				besselj0 = besselj1;
				besselj1 = besseljn;
			}
		}
		return besseljn;
	} 
}

/*Define derivative besseljn(z) by recurrence relation */
double DiffBesseljn(int n, double x)
{
	return (-Besseljn(n+1,x) + n*Besseljn(n,x)/x);
}

/*Define Neumannyn(z) */
double Neumannyn(int n, double x)
{
	int i;
	double Neumanny0, Neumanny1, Neumannyn;
	Neumanny0 = (-cos(x)/x);
	Neumanny1 = (-cos(x)/(x*x)-sin(x)/x);
	if (n==0) return Neumanny0;
	else if(n==1) return Neumanny1;
	/*using recurrence relation */
	else 
	{
		for(i=2; i<n+1; i++) 
		{
			Neumannyn = (2*i-1)*Neumanny1/x - Neumanny0;
			Neumanny0 = Neumanny1;
			Neumanny1 = Neumannyn;
		}
	}
	return Neumannyn;
}

/*Define derivative nuemannyn(z) by recurrence relation */
double DiffNeumannyn(int n, double x)
{
	return - Neumannyn(n+1,x) + n*Neumannyn(n,x)/x;
}


int factorial(int n)
{
	int i, fact;
	if(n == 0) return 1;
	else 
	{
		fact = n;
		for(i=n; i>1; i--) fact = fact*(i-1);
	}
	return fact;
}

/*Computes the associated Legendre polynomial P^m_n(x). 
Here m and n are integers satisfying 0 <= m <= n,1 <= x <= 1.*/
double OriginalLegendre(int m, int n, double theta)
{
	m = abs(m);
	double fact,pll,pmm,pmmp1,somx2;
	int i,ll;
	double x = cos(theta*M_PI/180);
	if (m > n || fabs(x) > 1.0)
	{
		printf("%d	%d\n",m,n);
		printf("Bad arguments in routine PLGNDR\n");
		printf("correct arguments:\n");
		printf("0 <= m <= n,1 <= x <= 1");
		exit(1);
	}
	pmm=1.0;
	if (m > 0) 
	{
		somx2=sqrt((1.0-x)*(1.0+x));
		fact=1.0;
		for (i=1;i<=m;i++) 
		{
			pmm *= -fact*somx2;
			fact += 2.0;
		}
	}
	if (n == m) return pmm;
	else 
	{
		pmmp1=x*(2*m+1)*pmm;
		if (n == (m+1)) return pmmp1;
		else 
		{
			for (ll=(m+2);ll<=n;ll++) 
			{
				pll=(x*(2*ll-1)*pmmp1-(ll+m-1)*pmm)/(ll-m);
				pmm=pmmp1;
				pmmp1=pll;
			}
			return pll;
		}
	}
}

//General legendre
double GeneLegendre(int m, int n, double theta)
{
	double plgdr;
	plgdr = OriginalLegendre(m, n, theta);
	double frac = (double)factorial(n-abs(m));
	frac = frac/factorial(n+abs(m));
	printf("%f\n",frac);
	if (m >= 0) return plgdr*sqrt(frac*(2*n+1)/2);
	else 
	{
		m = abs(m);
		if(m%2 == 0)return plgdr*sqrt(frac*(2*n+1)/2);
		else return (-1)*plgdr*sqrt(frac*(2*n+1)/2);
	}
}

//Derivative legendre
double DiffLegendre(int m, int n, double theta)
{
	double y = 0, x = cos(theta*M_PI/180);
	if(n == 0) return y;
	if(fabs(x*x-1) <= 1.0e-10) return y;
	else return (-(n+1)*x*OriginalLegendre(m,n,theta)+(n-abs(m)+1)*OriginalLegendre(m,n+1,theta))/(x*x-1.0);
}

int main()
{
	int i, j;
	double x;
	FILE *fp=NULL;
    //create data-file
    fp=fopen("data.txt","w");
	for(j=0; j<10; j++) 
	{
		
		printf("%d\n",factorial(j));
	/*	for(i=0; i<=180; i+=20) 
		{
			x = i*M_PI/180;
		//	printf("%f	%f\n",Neumannyn(j, x), Neumannyn(j, x));
		//	printf("%f	%f\n",Besseljn(j, x), Besseljn(j, x));
		}
		printf("\n");
		*/
		
	
		
	
		
		//printf("%lf\t",OriginalLegendre(j+1, 10, 0.5));
		//fprintf(fp, "%lf\t",OriginalLegendre(j+1, 10, 0.5));
		
		//printf("%lf\n",GeneLegendre(j+1, 10, 0.5));
		//fprintf(fp, "%lf\n",GeneLegendre(j+1, 10, 0.5));
	    
	    //printf("%lf\n",DiffLegendre(j+1, 10, 0.5));
		//fprintf(fp, "%lf\n",DiffLegendre(j+1, 10, 0.5));
	}
	fclose(fp);
	return 0;
}
  ```
  
