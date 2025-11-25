#include <stdio.h>

int main() {
    int n, sum = 0, i, odd = 1;
    printf("enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += odd;
        odd += 2;
    }
    printf("sum = %d", sum);
    return 0;
}
