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
   
long long int a;
long long int b=0;
cin>>a;
    
int n=(sqrt(1+8*a)-1)/2;
       for(int i=1;i<=n;i++)
       {
          long double k=((2.0*a/i)-i+1)/2.0;
      
            if(ceil(k)==floor(k))
            b++;
       }
   

    cout<<b;
  }



 



int main()
{
    

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
