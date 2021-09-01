#include <stdio.h>
int sumr(int n)
{
	int s=0;
	if (n==1)
		return 1;
	else
		s= n+ sumr(n-1);
	return (s);
}

int main()
{
    int n,sum;
    printf("enter  number");
    scanf("%d",&n);
    sum=sumr(n);
    printf("\n the sum of numbers from 1 to %d :%d",n,sum);
    return 0;

}
