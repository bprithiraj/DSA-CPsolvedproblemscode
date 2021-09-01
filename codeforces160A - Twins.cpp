#include<iostream>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;

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
    int t=0;
    int s=0,l=0;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
    s+=arr[i];
    }
    
    sort(arr,arr+n);
    for(int i=n-1;i>=0;i--)
    {
      if(l<s)
      {
           s-=arr[i];
           l+=arr[i];
           t++;
      }
      else
      break;
    }
    cout<<t;
                
        
        
 }

    