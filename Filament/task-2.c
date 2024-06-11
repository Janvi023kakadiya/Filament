#include <stdio.h>
//#include <string.h>

int main() {
    char string[50], result[50];
    int i, j = 0;

    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin); 
    
    string[strcspn(string, "\n")] = 0;

    
    for (i = 0; string[i] != '\0'; i++) {
    	
        if (string[i] != ' ' && string[i] != '\t') { 
        
            result[j++] = string[i]; 
        }
    }
    result[j] = '\0'; 

    printf("After removing spaces: %s\n", result); 

   
}
