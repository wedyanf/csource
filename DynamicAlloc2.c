/*
 DyanmicAlloc2.c
The program shows how to use calloc and realloc
*/
#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    int *ptr = calloc(10,  sizeof(int)); // allocate an array of 10 int
    if(ptr) {
        printf("%zu bytes allocated. Storing ints: ", 10*sizeof(int));
        //note that array elements are initialized to 0
        for(int i = 0; i < 10; ++i)
            printf("%d ", ptr[i]);
    }
 
    int *pb = realloc(ptr, 20 * sizeof(int)); // reallocate array to a larger size
    if(pb) {
        printf("\n%zu bytes allocated, first 10 ints are: ", 20*sizeof(int));
        for(int i = 0; i < 10; ++i)
            printf("%d ", pb[i]); 
        printf("\n");
        free(pb);
    } else { // if realloc failed, the original pointer needs to be freed
        free(ptr);
    }
}
