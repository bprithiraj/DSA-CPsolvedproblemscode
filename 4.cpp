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
long long int gcd(long long int  a, long long int  b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}

long long int  testcase  ()
{   
  long long int  c1,c2;
  cin >> c1 >> c2;
  long long int x=min(c1,c2);
  long long int  y=max(c1,c2);
  
  long long int ans= gcd(x,y);

  if(ans!=1)
  return 0;
  if(gcd(x+1,y)!=1)
  return 1;
  if(gcd(x,y+1)!=1)
  return 1;
  else
  return 2;

}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);

  int  t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    cout<<solve()<<"\n";
  }
}