#include <stdio.h>
int main() {
    char string[50];
    int i, total = 0;
    int inWord = 0; 

    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin); 

 
    string[strcspn(string, "\n")] = 0;

  
    for (i = 0; string[i] != '\0'; i++) {
        if (isspace(string[i])) { 
            inWord = 0;
        } else if (inWord == 0) { 
            inWord = 1; 
            total++; 
        }
    }

    printf("Total number of words: %d\n",total); 

  
}
