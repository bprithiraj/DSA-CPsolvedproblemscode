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
   
vector<int> v;
string s,c;
cin>>s;
c=s;
int flag=0;
int l=s.length();
for(int i=0;i<l;i++)
{
   v[i]=i;
}
 vector<int>::iterator ptr;
  vector<int>::iterator j;
for (ptr = v.begin(); ptr < v.end(); ptr++)
{


  for(j=ptr;j<v.end;j++)
   {

    if(s[*ptr]!=s[*j])
     {
     c[*ptr]=s[*j];
     c[*j]=s[*ptr];
     v.erase(ptr);
     v.erase(j);
     break;
     }

   }
   for(int i=0;i<l;i++)
   {
    if(s[i]==c[i])
      flag=1;
   }
   if(flag==0)
    cout<<c;
else
    cout<<"IMPOSSIBLE";

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
