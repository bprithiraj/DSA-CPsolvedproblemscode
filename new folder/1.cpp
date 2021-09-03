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
using namespace std;

void testcase()
{
   int n;
   cin>>n;
   string s;
   cin>>s;
   int c=0;
   cout<<"1"<<" ";
   for(int i=1;i<n;i++)
   {
    if(int(s[i])>int(s[i-1]))
        c++;
    else
        c=0;
    
    cout<<c+1<<" ";
    
   }





 

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
     
    
    cout<<"Case #"<<i<<": "; 
    testcase();
    cout<<"\n";

    }
                
        
        
 }
