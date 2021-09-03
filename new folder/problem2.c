#include <stdio.h>

void swap(int *x,int *y)
{
  int temp=*x;
  *x=*y;
  *y=temp;
}
int main()
{
    int a,b;
    printf("Enter the two nos you want to swap\n");
    scanf("%d%d",&a,&b);
    printf("The two nos before swapping is a=%d and b=%d\n",a,b);
    swap(&a,&b);
    printf("The two nos after swapping is a=%d and b=%d\n",a,b);
    return 0;
}
