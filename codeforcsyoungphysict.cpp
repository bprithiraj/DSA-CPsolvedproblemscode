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
    
     int t;
    cin>>t;
    int a[t][3];
    
    for(int i=0;i<t;i++)
    {

    for(int j=0;j<3;j++)
    {
        cin>>a[i][j];
               
    }
   }
   int x=0;
   int y=0;
   int z=0;
    for(int i=0;i<t;i++)
    {
        x+=a[i][0];
        y+=a[i][1];
        z+=a[i][2];

    }
    if(x==0&&y==0&&z==0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
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