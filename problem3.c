#include <stdio.h>

int main()
{
    int i,n;
    printf("Enter the no. elements of the array\n");
    scanf("%d",&n);
    int arr[n],cpy[n],*sp,*dp;
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sp=arr;
    dp=cpy;
    for(i=0;i<n;i++)
    {
        *(dp+i)=*(sp+i);
    }
    printf("The elements of the array through pointer after copied:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",cpy[i]);
    }
}