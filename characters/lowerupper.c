//Use of C library function toupper() and tolower()
#include <stdio.h>
#include <ctype.h>

int main()
{
  printf("Demonstration of tolower:\n");
  printf("\nA converted to lowercase: %c", tolower('A'));
  printf("\n@ converted to lowercase: %c", tolower('@'));
  printf("\n3 converted to lowercase: %c", tolower('3'));

  printf("\n\nDemonstration of toupper:\n");
  printf("\na converted to uppercase: %c", toupper('a'));
  printf("\n@ converted to uppercase: %c", toupper('@'));
  printf("\n3 converted to uppercase: %c", toupper('3'));

 return 0;

}
