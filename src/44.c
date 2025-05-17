#include <stdio.h>

int main() {
    int i;
    
    // Example program to demonstrate string manipulation in C
    
    printf("Hello, World!\n");
    
    // Print characters at even indices (1-based)
    for(i = 0; i < 5; i += 2) {
        printf("%d ", i);
    }
    
    return 0;
}
