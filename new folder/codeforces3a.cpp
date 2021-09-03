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
    int n=0;
    int arr[3];
    for(int i=1;i<=t;i++)
    {
         int c=0;

    for(int j=0;j<3;j++)
     cin>>arr[j];
    for(int j=0;j<3;j++)
    {
     if(arr[j]==1)
       c++;
    }
     if(c>=2)  
      n++;

    
    }
    cout<<n<<"\n";
}
                
        
        
 

    