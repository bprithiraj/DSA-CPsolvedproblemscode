#include <stdio.h>

int main()
{
    int i,n;
    printf("Enter the no. elements of the array\n");
    scanf("%d",&n);
    int arr[n],*fp,*lp,temp;
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    fp=arr;
    lp=&arr[n-1];
    for(i=0;i<n/2;i++)
    {
        temp=*(fp+i);
        *(fp+i)=*(lp-i);
        *(lp-i)=temp;
    }
    printf("The elements of the array after reversed through pointer:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
