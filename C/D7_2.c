#include <stdio.h>

int main() {
    int var = 10;
    
    // Store address of var variable
    int* ptr = &var;
    
    // Dereferencing ptr to access the value
    printf("%d", *ptr);
    
    return 0;
}