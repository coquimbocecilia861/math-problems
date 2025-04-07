#include <stdio.h>

int main() {
    int i = 0;

    while (i <= 10) {
        if (i % 3 == 0 || i % 5 == 0) {
            printf("FizzBuzz");
        } else if (i % 7 == 0) {
            printf("Fizz");
        } else if (i % 9 == 0) {
            printf("Buzz");
        } else {
            printf("%d", i);
        }
        i++;
    }

    return 0;
}
