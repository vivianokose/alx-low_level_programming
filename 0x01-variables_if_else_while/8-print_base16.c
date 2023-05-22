#include <stdio.h>

int main() {
    char digit = '0';
    
    while (digit <= '9') {
        putchar(digit);
        digit++;
    }
    
    char hexDigit = 'a';
    
    while (hexDigit <= 'f') {
        putchar(hexDigit);
        hexDigit++;
    }
    
    putchar('\n');
    
    return 0;
}
