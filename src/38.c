#include <stdio.h>

int main() {
    int i, j;
    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        for (j = 0; j < n - i + 1; ++j) {
            if ((2 * i + j) % n == 0) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
