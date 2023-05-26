#include <stdio.h>

int Number(int numDigits, int digits[]) {
    int number = 0;
    int i;

    for (i = 0; i < numDigits; i++) {
        number = number * 10 + digits[i];
    }

    return number;
}

int main() {
    int numDigits;
    printf("Enter the number of digits: ");
    scanf("%d", &numDigits);

    int digits[numDigits];
    printf("Enter the digits from left to right: ");
    for (int i = 0; i < numDigits; i++) {
        scanf("%d", &digits[i]);
    }

    int result = Number(numDigits, digits);
    printf("Output: %d\n", result);

    return 0;
}
