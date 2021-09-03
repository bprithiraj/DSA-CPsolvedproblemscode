#include<stdio.h>
int main()
{
int a[10][10],b[10][10],c[10][10],i,j,m,n;
printf("Enter size of rows and column of both matrices:\n");
scanf("%d %d",&m,&n);
printf("Enter 1 matrix:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",(*(a+i)+j));
}
}
printf("Enter 2 matrix:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",(*(b+i)+j));
}
}
printf("\nAddition Matrix:\n");
for(i=0;i<m;i++)
{ for(j=0;j<n;j++)
{
*(*(c+i)+j)=*(*(a+i)+j)+ *(*(b+i)+j);
printf("%d ",*(*(c+i)+j));
}
printf("\n");
}
return 0;
}
