#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("enter first number: ");
    scanf("%d", &a);

    printf("enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    printf("enter second number: ");
    scanf("%d", &b);

    switch(op) {
        case '+': printf("result = %d", a + b); break;
        case '-': printf("result = %d", a - b); break;
        case '*': printf("result = %d", a * b); break;
        case '/': printf("result = %d", a / b); break;
        case '%': printf("result = %d", a % b); break;
        default: printf("invalid operator");
    }
    return 0;
}
