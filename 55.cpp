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
#define ll long long int
#define MP make_pair
#define PB push_back


long long int  testcase()
{
    long long int  arr[3][3];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==1 && j==1)
            continue;
            cin>>arr[i][j];
        }
    }

    map<ll,ll> m;
    
    long double k=(arr[0][0]+arr[2][2])/2.0;
    if(ceil(k)==floor(k))
    m[k]++;



    k=(arr[0][1]+arr[2][1])/2.0;
    if(ceil(k)==floor(k))
    m[k]++;



    k=(arr[0][2]+arr[2][0])/2.0;
    if(ceil(k)==floor(k))
    m[k]++;


    k=(arr[1][0]+arr[1][2])/2.0;
    if(ceil(k)==floor(k))
    m[k]++;

    long long int a=0;

    for(auto i:m)
    {
        
        a=max(a,i.second);
    }

    for(int i=0;i<3;i++)
    {
        if(arr[i][0]-arr[i][1]==arr[i][1]-arr[i][2])
        a++;
    }




    for(int i=0;i<3;i++)
    {
        if(arr[0][i]-arr[1][i]==arr[1][i]-arr[2][i])
        a++;
    }

    return a;

}









int main()
{
  ios_base::sync_with_stdio(0);



  cin.tie(0);
  long long int  t;


  cin>>t;
  for(int i=1;i<=t;i++)
  {
      long long  int ans=testcase();
      cout<<"Case #"<<i<<": "<<ans;
      cout<<"\n";
  }
}