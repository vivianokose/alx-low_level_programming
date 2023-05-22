#include <stdio.h>

int main() {
    char letter = 'a';
    
    // Print lowercase alphabet
    while (letter <= 'z') {
        putchar(letter);
        letter++;
    }
    
    letter = 'A';  // Reset letter to 'A' for uppercase alphabet
    
    // Print uppercase alphabet
    while (letter <= 'Z') {
        putchar(letter);
        letter++;
    }
    
    putchar('\n');
    
    return 0;
}
