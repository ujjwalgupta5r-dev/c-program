#include <stdio.h>

int main() {
    int n;
    int bin = 0, base = 1;

    printf("enter number: ");
    scanf("%d", &n);

    while(n > 0) {
        int rem = n % 2;
        bin += rem * base;
        base *= 10;
        n /= 2;
    }

    printf("binary = %d", bin);
    return 0;
}
