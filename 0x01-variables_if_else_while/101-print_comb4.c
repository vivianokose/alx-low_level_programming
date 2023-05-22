#include <stdio.h>

int main() {
    int hundredsDigit = 0;
    
    while (hundredsDigit < 10) {
        int tensDigit = hundredsDigit + 1;
        
        while (tensDigit < 10) {
            int onesDigit = tensDigit + 1;
            
            while (onesDigit < 10) {
                putchar('0' + hundredsDigit);
                putchar('0' + tensDigit);
                putchar('0' + onesDigit);
                
                if (hundredsDigit < 7 || tensDigit < 8 || onesDigit < 9) {
                    putchar(',');
                    putchar(' ');
                }
                
                onesDigit++;
            }
            
            tensDigit++;
        }
        
        hundredsDigit++;
    }
    
    putchar('\n');
    
    return 0;
}
