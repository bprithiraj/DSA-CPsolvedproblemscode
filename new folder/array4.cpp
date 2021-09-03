#include<stdio.h>
int main()
{
   int i, j, n, temp=0;
   int count[3];
   cin>>n;
   int array[n];
   for(i=0;i<n;i++)
      cin>>array[i];
   for(i=0;i<n;i++)
   {
      if(array[i]==0)
         count[0]++;
      else if(array[i]==1)
         count[1]++;
      else if(array[i]==2)
         count[2]++;
   }
   for(i=0;i<3;i++)
   {
       for(j=temp;j<count[i];j++)
         array[j]==i;
       temp=temp+count[i];
   }
   for(i=0;i<n;i++)
      cout<<array[i];
   return 0;
}


