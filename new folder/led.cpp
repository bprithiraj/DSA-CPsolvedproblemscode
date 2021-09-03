
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
    
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        long long int sum=0;
        for(int i=0;i<s.length()-1;i++)
        {
            if(s[i]==s[i+1])
              sum+=2;
          else
            sum+=1;
        }
        long long int temp;
        for(int i=0;i<k;i++)

        {   sum=temp;
            long long int sum1=0;
            int q;
            cin>>q;
            if(q!=1&&q!=n)
            {
            if(s[q-2]==s[q-1]&&s[q-1]==s[q])
                sum-=4;
            else if(s[q-2]!=s[q-1]&&s[q-1]==s[q])
                sum-=3;
            else if(s[q-2]==s[q-1]&&s[q-1]!=s[q])
                sum-=3;
            else if(s[q-2]!=s[q-1]&&s[q-1]!=s[q])
                sum-=2;
        }
        else if (q==1)
        {
            if(s[q-1]==s[q])
                sum-=2;
            else
                sum-=1;
        }
        else if(q==n)
        {
            if(s[q-2]==s[q-1])
                sum-=2;
            else
                sum-=1;
        }



            if(s[q-1]=='0')
            s[q-1]='1';
        else
            s[q-1]='0';
         if(q!=1&&q!=n)
            {
        if(s[q-2]==s[q-1]&&s[q-1]==s[q])
                sum1=sum+4;
            else if(s[q-2]!=s[q-1]&&s[q-1]==s[q])
                sum1=sum+3;
            else if(s[q-2]==s[q-1]&&s[q-1]!=s[q])
                sum1=sum+3;
            else if(s[q-2]!=s[q-1]&&s[q-1]!=s[q])
                sum1=sum+2;
        }

        else if (q==1)
        {
            if(s[q-1]==s[q])
                sum1=sum+2;
            else
                sum1=sum+1;
        }
         else if(q==n)
        {
            if(s[q-2]==s[q-1])
                sum1=sum+2;
            else
                sum1=sum+1;
        }

       
        cout<<sum1<<"\n";
        temp=sum1;
        }

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