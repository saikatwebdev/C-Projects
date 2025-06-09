#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, digit, count = 0, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    
    originalNum = num;

    // Count digits
    int temp = num;
    while (temp != 0) {
        count++;
        temp /= 10;
    }

    // Calculate sum of digits raised to power of count
    temp = num;
    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, count);  // use math.h
        temp /= 10;
    }

    printf("Sum of each digit raised to power %d = %d\n", count, sum);

    // Optional: Check Armstrong number
    if (sum == originalNum) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is NOT an Armstrong number.\n", originalNum);
    }

    return 0;
}
