#include <stdio.h>
int main() {
    char string[30];
    int i;

    printf("Enter a string: ");
    
    fgets(string, sizeof(string), stdin); 
    
	string[strcspn(string, "\n")] = 0;

   
    for (i = 0; string[i] != '\0'; i++) {
        if (islower(string[i])) { 
            string[i] = toupper(string[i]); 
        } else if (isupper(string[i])) { 
            string[i] = tolower(string[i]); 
        }
    }

    printf("String after toggling case: %s\n", string); 


}
