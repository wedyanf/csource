#include <stdio.h>
#include <string.h>
int main()
{
     char first[30] = "ABC ABC";
     char second[30] = "YYY ZZZ";
     strncpy(first,second,3);
     printf("String s1 is: %s\n", first);
     return 0;
}
