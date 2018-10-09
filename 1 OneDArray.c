#include<stdio.h>

int main()//Declaration of main function.
{

int i, n;

printf("How many element you want?\n");
scanf("%d", &n);
int arr[n];
printf("enter element one by one \n");
for(i = 0; i<n; i++)
{
scanf("%d", &arr[i]);
}

printf("The Array is:");

for(i = 0; i<n; i++)
{

printf("\n%d", arr[i]);

}
return 0;
}
