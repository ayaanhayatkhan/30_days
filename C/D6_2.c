#include <stdio.h>

int main() {
    char str[20];

    // Reading the string 
    // (with spaces) using fgets
    fgets(str, 20, stdin);

    // Displaying the string using puts
    printf("%s", str);
    return 0;
}