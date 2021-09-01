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
    
 long long int n;
  cin>>n;

  unordered_map<long long int ,long long int> m;

  for(int i=0;i<n;i++)
  {
    long long int  x;
    cin>>x;
    m[x]++;
  }
  long long int  ans=0;
  for(auto i:m)
  {
    ans+=min(i.second,i.first-1);
  }
  cout<<ans;
    
    




   
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
     long long int q;
    cin>>q;
    for( long long int i=0;i<q;i++)
    {


    
    testcase();
    cout<<"\n";
}
    
                
        
        
 }