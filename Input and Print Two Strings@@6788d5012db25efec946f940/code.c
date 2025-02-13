#include <stdio.h>

int main() {
    char c;
    printf("Enter first string: ");
    // Reading and printing the first string character by character
    while((c = getchar()) != '\n' && c != EOF) {
        putchar(c);
    }
    putchar('\n');
    
    printf("Enter second string: ");
    // Reading and printing the second string character by character
    while((c = getchar()) != '\n' && c != EOF) {
        putchar(c);
    }
    putchar('\n');
    
    return 0;