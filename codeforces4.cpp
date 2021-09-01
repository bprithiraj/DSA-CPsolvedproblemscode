#include<iostream>
#include<algorithm>
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
    int k;
    
    int n;
    int c=0;
    cin>>n>>k;
    
         int arr[n];
         for(int j=0;j<n;j++)
          cin>>arr[j];
    for(int j=0;j<n;j++)
    {
    if(arr[j]>0&&arr[j]>=k)
     c++;
   
    }
    cout<<c;
                
        
        
 }

    