#include<stdio.h>

int main()
  {

int arr[2][3];
printf("Enter numbers for 2d array :\n");

for (int i = 0 ; i < 2 ; i++)
{
    for (int j = 0 ; j < 3 ; j++)
    {
        scanf("%d",&arr[i][j]);
        
    }

}
// output

for (int i = 0 ; i < 2 ; i++)
{
    for (int j = 0 ; j < 3 ; j++)
    {
    printf("%d",arr[i][j]);
    printf("\t");

    }
    printf("\n");

}





 }