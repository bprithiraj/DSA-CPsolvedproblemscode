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
    
    long long int s,n;
    cin>>s>>n;
    map<int ,int> m;
    map<int ,int>::iterator it;
    int arr[n];
    for(int i=0;i<n;i++)
    {
      int a,b;
      cin>>a>>b;
      m.insert({a,b});
      arr[i]=a;
               
    }
    int c=0;
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        if(s>arr[i])
        {
            c++;
            it=m.find(arr[i]);
            s+=it->second;
        }
    }
    if(c==n)
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
    
     
    testcase();
    
                
        
        
 }