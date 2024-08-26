#include<bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE //if not defined
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif // if defined

	
int N;
cin>>N;
vector<vector<int>>v;

for(int i=0;i<N;i++)
{
	int n;
	cin>>n;
	vector<int>temp;
	for(int j=0;j<n;j++)
	{
		int x;
		cin>>x;
		temp.push_back(x);
	}
	v.push_back(temp);
}

for(int i=0;i<N;i++)
{
	for(int j=0;j<v[i].size();j++)
	{
		cout<<v[i][j]<<" ";
	}
	cout<<endl;
}





	
}