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
    
     int a,b,c;
    cin>>a>>b>>c;
    int arr[6];
    arr[0]=a*b*c;
    arr[1]=a+b+c;
    arr[2]=(a+b)*c;
    arr[4]=a+(b*c);
    arr[3]=(a*b)+c;   
    arr[5]=a*(b+c);
    
    sort(arr,arr+6);
    cout<<arr[5];
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