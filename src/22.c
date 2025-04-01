#include <stdio.h>
#include <math.h>

double calculateRoot(double value) {
    double root = sqrt(value);
    return root;
}

int main() {
    double number;
    printf("Enter a number: ");
    scanf("%lf", &number);

    if (number > 0) {
        double result = calculateRoot(number);
        printf("The square root of %.2f is %.2f\n", number, result);
    } else {
        printf("Number must be greater than 0.\n");
    }

    return 0;
}
