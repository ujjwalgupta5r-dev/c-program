#include <stdio.h>

int main() {
    float cost, selling, profit, loss, percentage;

    printf("Enter Cost Price: ");
    scanf("%f", &cost);

    printf("Enter Selling Price: ");
    scanf("%f", &selling);

    if(selling > cost) {
        profit = selling - cost;
        percentage = (profit / cost) * 100;
        printf("Profit = %f", profit);
        printf("Profit Percentage = %f", percentage);
    }
    else if(cost > selling) {
        loss = cost - selling;
        percentage = (loss / cost) * 100;
        printf("Loss = %f", loss);
        printf("Loss Percentage = %f", percentage);
    }
    else {
        printf("No Profit No Loss");
    }

    return 0;
}
