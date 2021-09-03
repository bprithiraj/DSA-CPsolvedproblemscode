#include <bits/stdc++.h>
using namespace std;


void testcase()
{

	    int n;
	    cin>>n;
	    long long int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    
	    long long int odd[n];
	    long long int even[n];
	    int o=0,e=0;



	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]%2==0)
	        {
	            even[e++]=arr[i];
	        }
	        else
	        {
	            odd[o++]=arr[i];
	        }
	    }
	    int i=0,j=0,k=0;
	    
	    
	    int ncondition;
	    if(e>o)
	    ncondition=o-1;
	    else
	    ncondition=o;
	    while(i<e && j<ncondition)
	    {
	        if(k%2==0)
	        cout<<even[i++]<<" ";
	        else
	        cout<<odd[j++]<<" ";
	        k++;
	    }
	    
	    while(i<e)
	    cout<<even[i++]<<" ";
	    while(j<o)
	    cout<<odd[j++]<<" ";
	    
	   
}














int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		testcase();
		 cout<<"\n";
	}
}