#include <stdio.h>

int main() {
    int n, temp, rev = 0, digit;
    printf("enter number: ");
    scanf("%d", &n);

    temp = n;

    while(temp > 0) {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }

    if(rev == n)
        printf("palindrome");
    else
        printf("not palindrome");

    return 0;
}
