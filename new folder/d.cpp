
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
#include<stack>
#include <deque>
#define mod 1000000007
typedef long long ll;
typedef long int  li;
using namespace std;

void testcase()
{
    
      long long int m,n;
        cin>>n>>m;
        set<int> s;
        
        long int f=0,b=0;
        for(int i =1;i<=n;i++)
        {
            s.insert(i);
        }
        deque <long int> a;
        for(int i=0;i<m;i++)
        {
            int b;
            cin>>b;
            a.push_back(b);

        }
        for(int i=0;i<m;i++)
        {
            if(s.count(a.front()))
            {
                f++;
                s.erase(a.front());
                a.pop_front();
            }
            if(s.count(a.back()))
            {
                b++;
                s.erase(a.back());
                 a.pop_back();
                
            }


        }
        cout<<(f+b);
       
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
                
        
        
 }