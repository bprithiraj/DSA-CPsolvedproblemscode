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
    for(int i=4;i<=t;i++)
    {   
        int k=0;
        string s=to_string(i);
        int c=0;
        for(int j=0;j<s.length();j++)
        {
            if(s[j]=='4'||s[j]=='7')
                c++;
        }
        if(c==s.length())
        {
            if(t%i==0)
                k++;
        }


        if(k>0)
        {
            cout<<"YES\n";
            break;
        }
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