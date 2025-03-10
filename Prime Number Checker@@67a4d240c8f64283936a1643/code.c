// Your code here...
#include <stdio.h>
#include <math.h>

int is_prime(int t);
int is_prime(int t)
 {
    if (t<= 1) {
        return 0;  // 0 and 1 are not prime
    }
    for (int i = 2; i <= sqrt(t); i++) {
        if (t % i == 0) {
            return 0;  // Not prime if divisible by any number other than 1 and itself
        }
    }
    return 1;  // Prime number
}


