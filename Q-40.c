#include <stdio.h>

void onesComplement(int n) {
    if (n == 0)  // base case
        return;

    onesComplement(n / 10);   
    int digit = n % 10;
    if (digit == 0)
        printf("1");
    else
        printf("0");
}

int main() {
    int num;

    printf("Enter a binary number: ");
    scanf("%d", &num);

    printf("1's complement: ");
    onesComplement(num);
    printf("\n");

    return 0;
}