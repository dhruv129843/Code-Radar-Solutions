// Your code here...
#include <stdio.h>

int main() {
    int N;
    
    scanf("%d", &N);

    for (int i = 1; i <= 10; i++) {  // Fixed loop condition
        printf("%d x %d = %d\n", N, i, N * i);
    }

    return 0;  // Return statement moved outside the loop
}
