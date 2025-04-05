#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    double num1, num2;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    if (fabs(num1) > fabs(num2)) {
        swap(&num1, &num2);
    }

    printf("Max value is: %.2f\n", max(num1, num2));
    return 0;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
