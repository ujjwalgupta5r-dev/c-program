#include <stdio.h>

int main() {
    int a, b, c;

    printf("enter the three sides of the triangle:\n");
    scanf("%d %d %d", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
      
        if (a == b && b == c) {
            printf("This is an Equilateral triangle");
        }
        else if (a == b || b == c || a == c) {
            printf("This is an Isosceles triangle");
        }
        else {
            printf("This is a Scalene triangle");
        }
    } 
    else {
        printf("The given sides do not form a valid triangle");
    }

    return 0;
}
