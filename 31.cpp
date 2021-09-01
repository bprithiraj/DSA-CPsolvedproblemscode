#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
using namespace std;

void testcase()
{
  long long int a,b,c,d,e,f,g,h;
  int s=0;
  cin>>a>>b>>c>>d>>e>>f>>g>>h;
  if((a+f)/2==d&&(a+f)%2==0)
    s++;
  if((a+c)/2==b&&(a+c)%2==0)
    s++;
  if((h+f)/2==g&&(h+f)%2==0)
    s++;
  if((c+h)/2==e&&(c+h)%2==0)
    s++;
  long long int w,x,y,z;
  
  
  w=a+h;

  x=c+f;

  y=b+g;

  z=d+e;
  

    set<long long int,greater<long long int> > s1;

    
    if((a+h)%2==0)
    s1.insert(w);
  if((c+f)%2==0)

    s1.insert(x);
  if((b+g)%2==0)

    s1.insert(y);
  if((d+e)%2==0)
    s1.insert(z);



    if(s1.size()==4)
      s=s+1;
    else if(s1.size()==3)
      s=s+2;
    else if(s1.size()==2)
      s=s+3;
    else if(s1.size()==1)
      s=s+4;


    cout<<s;





 

}

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
    for(int i=1;i<=t;i++)
    {
     
    
    cout<<"Case #"<<i<<": "; 
    testcase();
    cout<<"\n";

    }
                
        
        
 }
