// Your code here...
#include <stdio.h>

int main() {
    int N;
    
    // Take input for the side of the square
    printf("Enter the side length of the square: ");
    scanf("%d", &N);
    
    // Loop through rows
    for(int i = 0; i < N; i++) {
        // Loop through columns
        for(int j = 0; j < N; j++) {
            printf("*");
        }
        // Print a newline after each row
        printf("\n");
    }
    
    return 0;
}

