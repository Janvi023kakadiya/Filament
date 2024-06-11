#include <stdio.h>
main(){
    char string[50];
    int i, length;
    int name = 0;

    printf("Enter a string: ");
    gets(string); 

    length = strlen(string); 

 
    for(i = 0; i < length / 2; i++) {
        if(string[i] != string[length - i - 1]) {
            name = 1; 
            break;
        }
    }

    if(name) {
        printf("%s is not a palindrome\n", string);
    } else {
        printf("%s is a palindrome\n", string);
    }
}
