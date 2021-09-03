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
    if(n==0)
        cout<<"1";
    else 
        if(n%4==1)
            cout<<"8";
        else if(n%4==2)
            cout<<"4";
        else if(n%4==3)
            cout<<"2";
        else if(n%4==0)
            cout<<"6";


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