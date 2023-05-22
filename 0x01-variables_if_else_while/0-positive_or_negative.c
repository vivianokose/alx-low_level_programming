#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));  // Seed the random number generator
    
    int n = rand() - RAND_MAX / 2;  // Generate a random number
    
    printf("The number %d is ", n);
    
    if (n > 0) {
        printf("positive");
    } else if (n == 0) {
        printf("zero");
    } else {
        printf("negative");
    }
    
    printf("\n");
    
    return 0;
}
