#include<bits/stdc++.h>
using namespace std;

void solution()
{
	int n , t;
	cin >>n >> t;

	string s;
	cin>>s;
	int c=0;
while(t--)
{
		for(int i=0; i<s.length(); )
	{
		if(s[i]=='B' && s[i+1]=='G')
		{
			char temp = s[i];
			s[i]=s[i+1];
			s[i+1]=temp;
			i+=2;
		}
		else
		{
			i++;
		}

	}


}

cout<<s<<endl;

}

int main()
{
	#ifndef ONLINE_JUDGE //if not defined
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif // if defined



solution();




	
}