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

using namespace std ;
#define SIZE 26
int fact(int n){

     return (n==0) || (n==1) ? 1 : n* fact(n-1);
}



void testcase() 

{
    


    string st;
    cin>>st;
    int n = st.size();
    string st1 = st;
    vector<string> v;
    srand(time(0));
    for(int i=0; i<fact(n); i++)
    {
        next_permutation(st1.begin(),st1.end());
        v.push_back(st1);
    }
    


    bool flag = false;
    string st2, st3;
    for(int i=0; i<n; i++){
        st2 = v[i];
        int cnt = 0;
        for(int j=0; j<n; j++)
        {
            if(st[j] != st2[j])
            {
                cnt++;
            }
            else if(st[j] == st2[j]){
                cnt = 0;
                break;
            }
        }
         
        if(cnt == n){
            flag = true;
            st3 = st2;
        }
        
    }
    if(flag == true)
    cout<<st3;
    else if(flag == false)  
    cout<<"IMPOSSIBLE";
    
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
