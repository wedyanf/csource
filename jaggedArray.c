/* jaggedArray.c
   dynamically allocate a jagged array, the use specifies the number of rows, and the size of the first row
   the second row will have one more element than the first row, the third row one more element than
   the second row, ...
   compile with -std=c99 
*/

#include <stdio.h> 
#include <stdlib.h> 

int main() 
{ 
	int **jagged;

	/* step 1: create an array of integer pointers */
        int rows, firstrow;
        printf("Enter number of rows: "); scanf("%d",&rows);
	jagged = (int **) calloc(rows, sizeof (int *)); //casting is optional but recommended
        printf("Enter size of first row: "); scanf("%d",&firstrow);
	for (int i= 0; i<rows; i++)
    	{
     	 // step 2: for each row (i.e. integer pointer), create an integer array 
      	 jagged[i] = calloc( (firstrow+i) , sizeof (int));
       }

	// Display elements in Jagged array 
	for (int i = 0,  *p, colsize=firstrow; i < rows; i++) { 
	  p = jagged[i]; 
	  for (int j = 0; j < colsize; j++) { 
		printf("%d ", *p); 
		// move the pointer to the next element 
		p++; 
	} 
	printf("\n"); 
	colsize++; //size of next row 
		// move the pointer to the next row 
		//jagged[i]++; 
	} 

	return 0; 
} 
