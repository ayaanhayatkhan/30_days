#include<stdio.h>

int main()
{
char again ;
int count = 0;
int arr[3];


do
{

    printf("Do you want to enter another number : y/n\n");
    scanf(" %c", &again);

    if ((again =='n' || again =='N') && count < 3 )
    {
        break;
    }
    //arr[count];
    printf("Enter a number :");
    scanf("%d",&arr[count]);
    count++;
} while ((again =='y' || again == 'Y') && count < 3);


printf("Array has %d numbers\n",count);
for (int i = 0; i < count; i++)
{
    printf("%d\n",arr[i]);


}


}
