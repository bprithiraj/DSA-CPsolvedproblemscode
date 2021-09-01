#include<iostream>
#include<algorithm>
#include<string>
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
    
    int n=0;
    string s;
    cin>>s;
    int c=s[0];
    int l=s.length();
    for(int i=1;i<l;i++)
    {
     if(c==s[i])
     {
      n++;
      c=s[i];
  }
     else
      n=0;
      c=s[i];
    if(n>=6)
     t++;
    }
    if(t>=1)
     cout<<"YES\n";
    else
     cout<<"NO\n";
                
     }

    