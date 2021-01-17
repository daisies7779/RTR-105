// Izejas kods nemts un parstradats no:
//https://www.geeksforgeeks.org/bubble-sort/

#include<stdio.h>
#include <stdlib.h>  

//Saglabā un apmaina mainīgos vietām
void swap(int *xp, int *yp) 
{ 
	int temp = *xp; 
	*xp = *yp; 
	*yp = temp; 
} 

// Masiva sakartosana ar burbulja metodi
void bubbleSort(int arr[], int n) 
{ 
int i, j; 
for (i = 0; i < n-1; i++)	 

	// Last i elements are already in place 
	for (j = 0; j < n-i-1; j++) 
		if (arr[j] > arr[j+1]) 
			swap(&arr[j], &arr[j+1]); 
} 

/* Funkcija masiva izdrukai */
void printArray(int arr[], int size) 
{ 
	int i; 
	for (i=0; i < size; i++) 
		printf("%d ", arr[i]); 
	printf("\n"); 
} 

// modas aprekinas konds nemts no
// https://www.tutorialspoint.com/learn_c_by_examples/mode_program_in_c.htm
int mode(int a[],int n) {
   int maxValue = 0, maxCount = 0, i, j;

   for (i = 0; i < n; ++i) {
      int count = 0;
      
      for (j = 0; j < n; ++j) {
         if (a[j] == a[i])
         ++count;
      }
      
      if (count > maxCount) {
         maxCount = count;
         maxValue = a[i];
      }
   }

   return maxValue;
}

// atrod medianu
// kods nemts no
// https://www.includehelp.com/c-programs/calculate-median-of-an-array.aspx
float Find_median(int array[] , int n)
{
    float median=0;
    
    // if number of elements are even
    if(n%2 == 0)
        median = (array[(n-1)/2] + array[n/2])/2.0;
    // if number of elements are odd
    else
        median = array[n/2];
    
    return median;
}

  

int main() 
{ 
  int i, n, min, max;
  int * arr;
  float summa, videjais, mediana;
  
  printf("Ievadiet apstradajamo elementu skaitu: ");
  scanf("%d", &n);
  
  //printf("Masiva izmers:%lu\n",sizeof(arr)/sizeof(arr[0]) );
  
  arr=(int*)malloc (i);
  if(arr==NULL) exit(1);
  
  printf("Ievadiet elementus: \n");
    
  //Ievada elementus un uzreiz saskaita to summu
  for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
         summa += arr[i];
    }

  printf("Masīvs pirms sakārtošanas: \n"); 
  printArray(arr, n);
  bubbleSort(arr, n); 
  printf("Sakartotais masivs augoša seciba: \n"); 
  printArray(arr, n); 
  
  //videjais= summa/n;
  printf("Videja vertiba ir = %.2f\n",  summa/n);
  printf("Moda = %d \n", mode(arr,n));
  printf("Mediana = %.3f\n", Find_median(arr, n));
  printf("Lielakais elements = %d\n", arr[n-1]);
  printf("Mazakais element = %d\n", arr[0]);
	     return 0; 
	     
} 

