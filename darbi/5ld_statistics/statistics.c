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


int main() 
{ 
  int i, N, min, max;
  int * arr;
  float summa, videjais, mediana;
  
  printf("Ievadiet apstradajamo elementu skaitu: ");
  scanf("%d", &N);
  
  //printf("Masiva izmers:%lu\n",sizeof(arr)/sizeof(arr[0]) );
  
  arr=(int*)malloc (i);
  if(arr==NULL) exit(1);
  
  printf("Ievadiet elementus: \n");
    
  //Ievada elementus un uzreiz saskaita to summu
  for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
         summa += arr[i];
    }

//	int arr1[] = {64, 34, 25, 12, 22, 11, 90}; 
	//int n = sizeof(arr)/sizeof(arr[0]); 
  
  int n = N; //pectam novienādot
  printf("Masīvs pirms sakārtošanas: \n"); 
  printArray(arr, N);
	bubbleSort(arr, n); 
	printf("Sakartotais masivs augoša seciba: \n"); 
	printArray(arr, n); 
  
  videjais= summa/N;
  printf("Videja vertiba ir = %.2f\n", videjais);
  printf("Mode = %d \n", mode(arr,n));
  printf("Lielakais elements = %d\n", arr[n-1]);
  printf("Mazakais element = %d\n", arr[0]);
	return 0; 
} 

