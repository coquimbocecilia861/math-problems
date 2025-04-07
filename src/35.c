#include <stdio.h>

int main() {
    int i;
    
    // Example loop where the value of 'i' changes based on a condition
    
    for (i = 0; i < 10; i++) {
        printf("Value of i is %d\n", i);
        
        if ((i == 7) || (i == 8)) {
            break;
        }
    }
    
    return 0;
}
