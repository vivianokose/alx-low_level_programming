#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));  // Seed the random number generator
    
    int n = rand();  // Generate a random number
    
    printf("Last digit of %d is ", n);
    
    int lastDigit = n % 10;  // Get the last digit of n
    
    if (lastDigit > 5) {
        printf("%d and is greater than 5", lastDigit);
    } else if (lastDigit == 0) {
        printf("0");
    } else {
        printf("%d and is less than 6 and not 0", lastDigit);
    }
    
    printf("\n");
    
    return 0;
}
