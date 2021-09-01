#include <stdio.h>

void add(int x,int y,int *z)
{
  *z=x+y;
}
int main()
{
    int a,b,sum;
    printf("Enter the two nos you want to add\n");
    scanf("%d%d",&a,&b);
    add(a,b,&sum);
    printf("The sum of two nos is %d\n",sum);
    return 0;
}
