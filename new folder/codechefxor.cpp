#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FOR(j, k, in) for (int i=j ; i<k ; i+=in)
#define MP make_pair
#define PB push_back
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
typedef vector<int> VI;

const int N=1e7+5;


void solve ()
{   
  ll n;
  cin>>n;

  ll arr[n];
  FOR(0,n,1)
  {
    cin>>arr[i];
  }
  
  sort(arr,arr+n);

  ll x=arr[n-1];

  FOR(0,n,1)
  {
    arr[i]=arr[i]^x;
  }
  ll sum=0;
  FOR(0,n,1)
  {
    sum=sum|arr[i];
  }
  cout<<x<<" "<<sum<<"\n";

}

int main()
{
  ios_base::sync_with_stdio(0);cin.tie(0);

  ll t;cin>>t;
  while(t--)
  {
    solve();
  }
}