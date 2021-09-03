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
    
     long long int n;
    cin>>n;
    int k=cbrt(n);
    int a=1;
  
    for(int i=1;i<=k;i++)
        for(int j=1;j<=k;j++)
            for(;a<=k;a++)
            {
                if((i*i*i+j*j*j+a*a*a)==n)
                {
                    cout<<i*i*i<<" "<<j*j*j<<" "<<a*a*a;
                    break;
                }
            }
     if(a==k)
        cout<<"-1";
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
     
    testcase();
    cout<<"\n";
    }
                
        
        
}