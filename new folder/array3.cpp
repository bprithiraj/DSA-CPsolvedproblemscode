#include<stdio.h>
int main()
{
   int i, j,count,temp;
   cin>>count;
   int number[count];


   for(i=0;i<count;i++)
      cin>>number[i];
   for(i=1;i<count;i++)
   {
      temp=number[i];
      j=i-1;
      while((temp<number[j])&&(j>=0))
      {
         number[j+1]=number[j];
         j=j-1;
      }
      number[j+1]=temp;
   }
   cout<<"min:"<<"\n"<<number[k-1]<<"max"<<number[n-k+1];

   return 0;
}
