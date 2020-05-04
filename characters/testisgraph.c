#include <stdio.h>
#include <ctype.h>

int main()
{
   printf("Demonstration of isgraph( ):\n");

   if( isgraph('W') == 0)
     printf("\nW is not printing character");
   else
     printf("\nW is a printing character");

   if( isgraph(' ') == 0)
     printf("\nSpace is not printing character");
   else
     printf("\nSpace is a printing character");

 return 0;
}