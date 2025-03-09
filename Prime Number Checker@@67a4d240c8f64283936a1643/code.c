// Your code here...
def is_prime(n):
    if n <= 1:
        return 0  //Numbers less than or equal to 1 are not prime
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return 0  // Found a divisor, hence not prime
    return 1  // No divisors found, hence prime
