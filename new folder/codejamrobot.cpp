
#include<iostream>
#include<string>
#include<algorithm>
#include<set>
void test_case()
{
	int n;
	cin>>n;
	vector<string>they(n);
	for(int i=0;i<n;i++)
	{
		cin>>they(i);
		string moves;
		for(int pos=0;true;pos++)
		{
			 set<int>chars;
			 for(string s:they)
			 {
			 	chars.insert[s[pos%s.length()]];

			 }
			 If((int)chars.size()==3)
			 {
			 cout<<"IMPOSSIBLE\n";
			 return;
			}
			 if(chars.count('R')&&chars.count('S'))
			 	moves+="R";
			 else  if(chars.count('R')&&chars.count('P'))
			 	moves+="P";
			 else  if(chars.count('P')&&chars.count('S'))
			 	moves+="S";
			 else  if(chars.count('S'))
			 	moves+="R";
			 else if(chars.count('R'))
			  	moves+="P";
			  else  if(chars.count('P'))
			  	moves+="S"; 



		}
	}
}
int main()
{
	 int t;
	 cin>>t;
	 for(int i;i<=t;i++)
	 {
	 	cout<<"Case #"<<i<<": ";
	 	test_case();
         
	 }

}