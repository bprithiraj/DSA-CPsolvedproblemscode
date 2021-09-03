#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
bool prefix(string a, string b)
{
    return a.length() <=b.length() && b.substr(0,a.size())==a;
}
void testcase()
{
    
    
    int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    long long int c=0;
    for(int i=1;i<n;i++)
    {
        if(a[i-1]>=a[i])  
     {  
          int si1 = trunc(log10(a[i-1])) + 1;
        int si  = trunc(log10(a[i])) + 1;
         
         
         string a=to_string(a[i-1]);
         string b=to_string(a[i]);
         if(prefix(b,a))
         {   if(prefix(b,to_string(a[i-1]+1)))
            {
             c=si1-si;
             a[i]=a[i-1]+1;
            }
         }
         
       
        if(si1==si)
        {
        c=c+1;
        a[i]=a[i]*pow(10,1);
        }
        else
        {
         if((a[i]/pow(10,si))>(a[i-1]/pow(10,si1)))
         {
          c=c+si1-si;
          a[i]=a[i]*pow(10,si1-si);
         }
         else 
         {
          c=c+si1-si+1;
          a[i]=a[i]*pow(10,si1-si+1);
        }
        }
        
       
     } 
     
    }
   
   cout<<c;
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