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
int next(long long int a[],long long int target, int end)
{
    int start = 0;
 
    int ans = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
 
        // Move to right side if target is
        // greater.
        if (a[mid] < target)
            start = mid + 1;
 
        // Move left side.
        else
        {
            ans = mid;
            end = mid-1 ;
        }
    }
 
    return ans;
}




void testcase()
{
    
     int n,q;
    cin>>n>>q;
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    
    long long int x;

    for(int i=0;i<q;i++)
    {
        cin>>x;
        int sum=1;
        int b=1;
        if(sum>a[n-1]||sum<a[0])
        {
            cout<<"POSITIVE\n";
            continue;
        }


      sum= next(a,x,n);


       if(a[sum]==x)
            cout<<"0\n";

        else if((sum+1)%2==0)
            cout<<"NEGATIVE\n";
        else if((sum+1)%2!=0)
            cout<<"POSITIVE\n";
        
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