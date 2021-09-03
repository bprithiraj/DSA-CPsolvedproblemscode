#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
#define mod 1000000007

using namespace std ;
#define SIZE 26

 
    
   


long long int  testcase ()
{  
  long long int N= 1e7+5
long long int arr[N] ;
  long long int n;
  cin>>n;
  memset(arr,0,sizeof arr);
  long long  int 
  long long int a;
  long long int maxi=-1;
  for(int i=0;i<n;i++)
  {
    cin>>a;
    arr[a]++;
    maxi=maxi(maxi,a)
  }
  long long int ans=n*(n-1);
   for(int i=0;i<maxi+1;i++)
   {
     if(arr[i]>0)
      ans-=arr[i]*(arr[i]-1);
   }
   cout<<ans;


}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);

  long long int  t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    testcase();
    cout<<"\n";
  }
}