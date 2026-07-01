#include <stdio.h>

int main()
{
    int arr[8] = {3, 7, 1, 9, 4, 6, 2, 8};
    int sum = 0;
    int max = arr[0];
    int min = arr[0];

    for (int i = 0; i < 8; i++)
    {
        sum += arr[i];

        if (arr[i] > max)
            max = arr[i];

        if (arr[i] < min)
            min = arr[i];
    }

    printf("Sum = %d\n", sum);
    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}