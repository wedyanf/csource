#include <stdio.h>
#include <string.h>
int main()
{
     char s1[80];
     char s2[80];
     printf("enter first string: ");    fgets(s1,80,stdin);
     printf("enter second string: ");   fgets(s2,80,stdin);
     int result = strcmp(s1, s2);
     if (result<0)    printf("string 1 is less than string 2\n"); 
     else if (result==0)
       printf("string 1 is equal to string 2\n");
      else
       printf("string 1 is larger than string 2\n");
     
     if (strncmp(s1, s2, 3) ==0)
     {
         printf("the first 3 characters of string 1 and string 2 are equal\n");
     }else
     {
         printf("string 1 and 2 are different\n");
     }
     return 0;
}
