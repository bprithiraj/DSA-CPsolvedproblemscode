#include<iostream>
using namespace std;

int main() 
{ 
  int n,temp;
  cin>>n;
  int array[n];
  for(int i=0;i<n;i++)
    cin>>array[i];
  int c=n%2;
  for(int i=0;i<c;i++)
    {
      temp=array[i];
      array[i]=array[n-i-1];
      array[n-i-1]=temp;
    }
  for(int i=0;i<n;i++)
    cout<<array[i];

}

