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
using namespace std;

void testcase()
{
    
     int n;
    cin>>n;
    int max=0;
    
  for(int i=0;i<n;i++)
   {
    int s,p,v;
    cin>>s>>p>>v;
    int a=(p/s)*v;
    if(a>max)
        max=a;
}
   cout<<max;
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
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
     cout<<"\n";
    testcase();
    }
                
        
        
 }