#include <stdio.h> 
#include <string.h> 
  
int main() 
{ 
    char str[] = "University of Missouri Saint Louis"; 
  
    // Returns pointer to the first token, null if no token is found
    char* token = strtok(str, " "); 
  
    while (token != NULL) { 
        printf("%s\n", token); 
        token = strtok(NULL, " "); 
    } 
  
    return 0; 
} 
