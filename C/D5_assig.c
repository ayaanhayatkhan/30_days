#include <stdio.h>

int main()
{
    int arr[10];
    int i = 0;
    char choice;

    do
    {
        printf("Enter a number: ");
        scanf("%d", &arr[i]);
        i++;

        // Check if array is full
        if (i == 10)
        {
            printf("Array is full.\n");
            break;
        }

        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice);   

    } while (choice == 'y' || choice == 'Y');

    printf("\nNumbers entered are:\n");

    for (int j = 0; j < i; j++)
    {
        printf("%d ", arr[j]);
    }

    printf("\n");

    return 0;
}