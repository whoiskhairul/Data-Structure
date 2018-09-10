#include<stdio.h>
int arr[3][3],r=0,c=0,i,j;

void printall()
{
    for(i=0;i<3;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    printf("Enter the 3*3 matrix/arrey:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printall();
}
