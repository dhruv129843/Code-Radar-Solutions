// Your code here...
#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Check if the first number is greater than the second number
    if (num1 > num2) {
        printf("True\n");
    }

    return 0;
}
