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

 
    
   
void testcase()
{
    
 long long int  n;



  cin>>n;

  long long int  arr[n];


  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }


  
  sort(arr,arr+n);

  long long int  x=arr[n-1];

  for(int i=0;i<n;i++)
  {
    arr[i]=arr[i]^x;

  }


  long long int  sum=0;


  for(int i=0;i<n;i++)

  {
    sum=sum|arr[i];
  }


  cout<<x<<" "<<sum<<"\n";
    
    




   
   }



   int main()
{
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    

    ios_base::sync_with_stdio(false);
    cin.tie(NULL );
      long long int q;
    cin>>q;
    for(  long long int i=0;i<q;i++)
    {


    
    testcase();
    cout<<"\n";
}
    
                
        
        
 }