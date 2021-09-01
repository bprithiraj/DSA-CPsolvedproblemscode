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
typedef long long ll;
typedef long int  li;
using namespace std ;



void testcase()
{
   
long long int n;
cin>>n;
long long int arr[n];
for(int i=0;i<n;i++ )
{
    cin>>arr[i];
   
}
long long int a[n];
for(int i=0;i<n;i++)
{
    a[arr[i]-1]=i+1;
}

long long int m;
cin>>m;
long long int a1=0,b=0;
for(int i=0;i<m;i++)
{
    long long int q;
    cin>>q;

     
    a1=a1+a[q-1];
    b=b+n-a[q-1]+1;
    
    
    
    

}

cout<<a1<<" "<<b;
      
    
    

   
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
    cin.tie(NULL);
    
    testcase();
    
                
        
        
 }