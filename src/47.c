#include <stdio.h>

void print_numbers(int count) {
    if (count > 0) {
        printf("%d ", count);
        print_numbers(count - 1);
    }
}

int main() {
    int count = 5;
    print_numbers(count);
    return 0;
}
