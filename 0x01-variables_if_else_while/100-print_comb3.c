#include <stdio.h>

int main() {
    int tensDigit = 0;
    
    while (tensDigit < 10) {
        int onesDigit = tensDigit + 1;
        
        while (onesDigit < 10) {
            putchar('0' + tensDigit);
            putchar('0' + onesDigit);
            
            if (tensDigit < 9 || onesDigit < 9) {
                putchar(',');
                putchar(' ');
            }
            
            onesDigit++;
        }
        
        tensDigit++;
    }
    
    putchar('\n');
    
    return 0;
}
