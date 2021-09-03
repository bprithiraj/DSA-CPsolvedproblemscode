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
    int t;
    
    
    cin>>t;
    char a[100000];
    for(int i=1;i<=t;i++)
    {
    cin>>a;
    int l= sizeof(a)/sizeof(a[0]);
    if(l>10)
     cout<<a[0]<<l<<a[l]<<"\n";
    else
     cout<<a<<"\n";
    }
    
        
        
 }

    