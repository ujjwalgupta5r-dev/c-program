#include <stdio.h>

int main() {
    long long bin;
    printf("enter binary number: ");
    scanf("%lld", &bin);

    printf("1's complement = ");

    while(bin > 0) {
        int digit = bin % 10;
        if(digit == 0)
            printf("1");
        else
            printf("0");
        bin /= 10;
    }

    return 0;
}
