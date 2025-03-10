// Your code here...
#include <stdio.h>
#include <math.h>

int isPrime(int t);
int isPrime(int t)
 {
    if (t<= 1) {
        return 0;  // 0 and 1 are not prime
    }
    for (int i = 2; i < (t); i++) {
        if (t % i == 0) {
            return 0;  // Not prime if divisible by any number other than 1 and itself
        }
    }
    return 1;  // Prime number
}


