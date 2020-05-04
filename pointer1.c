#include <stdio.h>
int main(){
int a = 632;
int c;  // c ’s value is garbage now 
c = a;  //c ’s value is the same as a ’s value 
int * iptr1 ;  // iptr1 ’s value is garbage now 
int * iptr2 ;  // iptr2 ’s value is garbage now 
iptr1 = & a ;  // iptr1 ’s value is a’s address 
iptr2 = iptr1 ; //iptr2 and iptr1 have the same value 
printf("a = %d\n",a);
printf("a = %d\n",*iptr1);
printf("a = %d\n",*iptr2);
printf("address of a = %ld\n",&a);
printf("pointer iptr1 value = %ld\n",iptr1);


}
