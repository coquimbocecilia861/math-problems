#include <stdio.h>
int main() {
    int i;
    printf("Enter number of rows: ");
    scanf("%d", &i);
    if (i <= 0) {
        printf("Please enter a positive integer for the row count.\n");
        return 1;
    }
    int j = i;
    while (--j > 0) {
        printf("* ");
    }
    printf("\n");
    return 0;
}
