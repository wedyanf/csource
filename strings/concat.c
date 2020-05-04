#include <stdio.h>
#include <string.h>
int main()
{
     char s1[80] = "Hello";
     char s2[80] = "World";
     strcat(s1,s2);
     printf("Output string after concatenation: %s\n", s1);
     strcpy(s1,"\0");
     strncat(s1,s2, 3);
     printf("Concatenation using strncat: %s\n", s1);
     return 0;
}
