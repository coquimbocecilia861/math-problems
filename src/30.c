#include <stdio.h>
int main() {
    int i = 0;
    while(i < 5) {
        if (i % 2 == 0)
            printf("Even\n");
        else
            printf("Odd\n");
        i++;
    }
}
