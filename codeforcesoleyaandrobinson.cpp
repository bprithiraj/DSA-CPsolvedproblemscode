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
    
     int n,t;
     cin>>n>>t;
     if(n>1)
     {  
        if(t<10)
        {
        while(n>0)
        {
            cout<<t;
            n--;
        }
        }
        else
        {
            cout<<"1";
            while(n>1)
            {
                cout<<"0";
                n--;
            }
        }
     }
     else
     {
        if(t<10)
            cout<<t;
        else
            cout<<"-1";
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
    
    
    testcase();
    
                
        
        
 }