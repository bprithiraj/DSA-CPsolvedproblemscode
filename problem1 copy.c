#include <stdio.h>

int gcd(int *x,int *y)

  
{
    
    if (*y == 0) 
    {
        return *x;

    }
 
    int q = *x / *y;      
    int r = *x - q * *y;  
 
    
 
    
    return gcd(y, &r);
}
int lcm(int *a,int *b)
{
	int lcd=(*a) * (*b)/gcd(a,b);
	return lcd;
}



int main()
{
    int a,b,*x,*y;
    printf("Enter the two nos you want to find hcf and lcm\n");
    scanf("%d%d",&a,&b);
    x=&a;
    y=&b;
    int hcf=gcd(x,y);
    
    int lc=lcm(x,y);

    printf("The hcf of two nos is %d\n",hcf);
    printf("the lcm of two nos is %d\n",lc);
    return 0;
}
