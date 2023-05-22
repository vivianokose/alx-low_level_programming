#include <stdio.h>

int main() {
    int firstNumber = 0;
    
    while (firstNumber < 100) {
        int secondNumber = firstNumber;
        
        while (secondNumber < 100) {
            putchar('0' + firstNumber / 10);
            putchar('0' + firstNumber % 10);
            putchar(' ');
            putchar('0' + secondNumber / 10);
            putchar('0' + secondNumber % 10);
            
            if (firstNumber < 99 || secondNumber < 99) {
                putchar(',');
                putchar(' ');
            }
            
            secondNumber++;
        }
        
        firstNumber++;
    }
    
    putchar('\n');
    
    return 0;
}
