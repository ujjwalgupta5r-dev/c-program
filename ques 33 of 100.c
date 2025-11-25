#include <stdio.h>

int main() {
    int n, temp, digit, sum = 0;
    printf("enter number: ");
    scanf("%d", &n);

    temp = n;
    while(temp > 0) {
        digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }

    if(sum == n)
        printf("armstrong Number!");
    else
        printf("not armstrong!");

    return 0;
}
