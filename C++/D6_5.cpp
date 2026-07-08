#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char src[] = "Hello, Ayaan";
    char dest[20] = "Khan";

    // Copies src to dest
       strcat(dest,src);

    cout << strncat(dest, src,3) << endl;

    return 0;
}