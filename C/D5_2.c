#include <stdio.h>

int main() {
    char str[10];

    // Reading the string 
    // (with spaces) using fgets
    fgets(str, 10, stdin);

    // Displaying the string using puts
    //printf("%s", str);
    puts(str);
    return 0;
}
