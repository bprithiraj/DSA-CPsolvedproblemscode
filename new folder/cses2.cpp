#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	
    

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    int s=0;
    int n;
    cin>>t;
    for(int i=1;i<t;i++)
    {
    cin>>n;
    s+=n;
    }
    cout<<(t*(t+1)/2)-s;
                
        
        
 }

    