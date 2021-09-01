#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	
    

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    int x,y;
    int n;
    string s;
    cin>>t;
    
    for(int i=1;i<=t;i++)
    {
    cin>>x>>y;
    cin>>s;
    int l=s.length();
    int c=0;
    for(int j=0;j<l;j++)
    {
    if(s[j]=='N')
    y++;
    else if(s[j]=='S')
    y--;
    else if(s[j]=='W')
    x--;
    else if(s[j]=='E')
    x++;
    if(abs(x)+abs(y)<=j+1)
    {
     cout<<"Case #"<<i<<": "<<j+1<<"\n";
     
     break;
    }
    c++;
    }
    if(c==l)
    cout<<"Case #"<<i<<": "<<"IMPOSSIBLE"<<"\n";
    }
                
        
        
 }
