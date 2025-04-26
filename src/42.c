#include <stdio.h>

int main() {
    int i, j;
    printf("Enter n: ");
    scanf("%d", &n);
    
    if (n % 2 == 0) {
        for (i = 1; i <= n / 2; i += 2)
            for (j = 1; j <= n / 2; j += 2)
                printf(" * ");
        for (i = 1; i < n; i += 2)
            for (j = 1; j <= n / 2 - i; j += 2)
                printf("%d", i);
    } else {
        for (i = 1; i <= n / 2; i += 2)
            for (j = 1; j <= n / 2 - i; j += 2)
                printf("* ");
        printf(" + *");
    }
    
    return 0;
}
