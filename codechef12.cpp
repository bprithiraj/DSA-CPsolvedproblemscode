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


bool prime(int n)
{
    while (n%2 == 0)
    {
        n = n/2;
    }
 
    while(n%5==0)
    {
        n=n/5;
    }
    if(n==1)
    return true;
    else
    return false;
    
}


void testcase()
{
    unsigned long long int a,b;
    
    if(prime(b))
        cout<<"Yes";

    else
        cout<<"No";
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

    for(int i=0;i<t;i++)
    {


    testcase();
    cout<<"\n";
}















int n;
       cin>>n;
       int arr[n];
       int s=0;
       for(int i=0;i<n;i++)
       {
           
       
       cin>>arr[i];
       s+=arr[i];
       
       
    }
    return s;