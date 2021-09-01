
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
    
    
    int n;
    cin>>n;
    vector< pair <int,long long int> > vect(n);
    long long int sumall;
    for(pair<int,long long int>pair:vect)
    {
        cin>>pair.first>>pair.second;
        sumall+=pair.second*pair.first;
    }
    for( int i=2;i<7'000;i++)
    {    
        long long product=sumall-i;
        if(product<=1)
        {
            break;
        }
        bool ok = true;
        for(pair<int,long long int> pair:vect)
        {
            int p=pair.first;
            long long freq=pair.second;
            long long wesum=0;
            int cnt=0;  
            while(product%p==0)
            {
                product/=p;
                cnt++;
            }
            if(cnt>freq)
            {
                ok=false;
                break;
            }
            wesum=(long long)cnt*p;
            if(!ok)
            {
                continue;     
            }
            if(product==1&&wesum==i)
            {
                cout<<sumall-i;
            }
        }
    }
   
}

int main()
{
    
    

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
    cout<<"Case #"<<i<<": " ;
    testcase();
    cout<<"\n";
    }
                
        
        
 }