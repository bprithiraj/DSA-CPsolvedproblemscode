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
    int m;
    
    int n;
    cin>>m>>n;
    if(m%2!=0&&n%2!=0)
     cout<<m*n/2-1;
    else 
     cout<<m*n/2;
     
        
        
 }

    