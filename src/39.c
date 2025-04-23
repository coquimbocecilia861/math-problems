#include <stdio.h>
int main() {
    int i;
    int arr[5];

    for(i = 0; i < 5; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 5; i++) {
        if(arr[i] >= 7) {
            printf("Element at index %d is too high.\n", i + 1);
        } else {
            printf("Element at index %d is within acceptable range.\n", i + 1);
        }
    }

    return 0;
}
