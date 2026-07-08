#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello";
    char dest[10];
    
    // Copies "Hello" to dest
    strncpy(dest, src, 5);
    printf("%s", dest);
    return 0;
}