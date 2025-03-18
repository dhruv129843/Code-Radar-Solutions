// Your code here...
#include <stdio.h>

int main() {
    int n;
    
    // Taking input from the user
   
    scanf("%d", &n);

    // Loop to print numbers from 0 to n
    for(int i = 1; i <= n; i++) {
        printf("%d ", i);  // Corrected printf
    }

    return 0;
}
