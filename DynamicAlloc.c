// DynamicAlloc.c
// create an array whose size is specified at run time.  
// Fill array with random numbers in the range [a,b]
// Print the array
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char * argv[])
{
  int *arr;
  int i;
  int size;
  do {
  	printf("Please input array size [1,50]: "); scanf("%d",&size);
  }while (size>50 || size<1); 
  arr = malloc(argc * sizeof(int));
  if (arr == NULL)
    {
      printf("malloc fails.\n");
      return EXIT_FAILURE;
    }
    // Use current time as seed for random generator 
    srand(time(0)); 
  // fill the array with random numbers in the range [a,b]
   int a,b;
  printf("Please input the range boundaries for random numbers\n");
   
  printf("lower bondary (a): "); scanf("%d",&a);
  printf("upper bondary (b): "); scanf("%d",&b);
  for (i = 0; i< size; i++)
    {
      arr[i] = a+rand()%(b-a+1);
    } 
  for (i = 0; i < size; i++)
    {
      printf("%d ", arr[i]);
    }
  printf("\n");
  
  return EXIT_SUCCESS;
}
