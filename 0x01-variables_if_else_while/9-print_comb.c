#include <stdio.h>

int main() {
    int number = 0;
    
    while (number < 10) {
        putchar('0' + number);
        
        if (number < 9) {
            putchar(',');
            putchar(' ');
        }
        
        number++;
    }
    
    putchar('\n');
    
    return 0;
}
