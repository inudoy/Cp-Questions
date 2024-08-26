#include<bits/stdc++.h>
using namespace std;

void solution()
{
	long long  a , b , c , d;
	cin>>a>>b>>c>>d;

	int c1=0;

	if(a==b || a==c || a==d)
	{
		c1++;
	}
	if(b==c || b==d)
	{
		c1++;
	}

	if(c==d)
	{
		c1++;
	}

	cout<<c1<<endl;
}

int main()
{
	#ifndef ONLINE_JUDGE //if not defined
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif // if defined

	





solution();


	
}