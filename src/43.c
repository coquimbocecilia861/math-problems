#include <stdio.h>

int main() {
    int i;
    printf("Enter n: ");
    scanf("%d", &n);
    
    if (n > 0) {
        for (i = 1; i <= n; i++) {
            if (i % 2 == 0)
                printf("*");
            else
                printf("#");
        }
        printf("\n");
    } else {
        printf("Error: n must be a positive integer.\n");
    }

    return 0;
}
