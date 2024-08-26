#include<bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE //if not defined
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif // if defined

	
int n;
cin>>n;

deque<int>d;

for(int i=0; i<n ; i++)

{
	int intput;
	cin>>intput;

	d.push_back(intput);
}


for(auto i:d)
{
	cout<<i<<" ";
}






	
}