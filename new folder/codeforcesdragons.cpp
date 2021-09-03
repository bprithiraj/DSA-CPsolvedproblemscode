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
    int st[n];
    int bo[n];
   
    vector<pair <int ,int> > vect;
    for(int i=0;i<n;i++)
    {
      cin>>st[i];
      cin>>bo[i];
      vect.push_back( make_pair(st[i],bo[i]) );
               
    }

    int c=0;
    sort(vect.begin(),vect.end());
    for(int i=0;i<n;i++)
    {
        if(s>vect[i].first)
        {
            c++;
            s+=vect[i].second;

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