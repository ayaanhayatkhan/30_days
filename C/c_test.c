#include<stdio.h>

int main ()
{

int arr[5]={3 ,4 ,5, 6, 7};

int sum = 0;
int average = 0;
int max = arr[0];
int min = arr[0];

for (int i = 0; i < 5; i++)
{

sum += arr[i];
if (arr[i]>max)
max = arr[i];

if (arr[i]<min)
min = arr[i];

}
average = sum/(sizeof(arr)/sizeof(arr[0]));

printf("The sum is :%d\n",sum);
printf("The average is :%d\n",average);
printf("The maximum is :%d\n",max);
printf("The mininum is :%d\n",min);
return 0;


}