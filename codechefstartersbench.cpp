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
typedef long int li;
using namespace std;




void testcase()
{
    
    long  int n,w,wr;
    cin>>n>>w>>wr;
    long int a[n];
    unordered_map<long int,long int> count;
    
    for(int i=0;i<n;i++)
    {
         cin>>a[i]; 
         count[a[i]]++;    
    }
    
      for(auto x: count)

      {
        if(x.second%2==0)
            wr+=x.second*x.first;
        else
            wr+=(x.second-1)*x.first;

      }
      if(wr>=w)
        cout<<"YES";
      else
        cout<<"NO";

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
