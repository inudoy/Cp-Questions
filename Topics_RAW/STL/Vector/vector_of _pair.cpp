#include<bits/stdc++.h>
using namespace std;


void print(vector<pair<int,int>>&v)
{
	cout<<"size: "<<v.size()<<endl;
	for(int i=0;i<v.size();i++)
	{

		cout<<v[i].first<<" "<<v[i].second<<endl;
	}
}

int main()
{
	#ifndef ONLINE_JUDGE //if not defined
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif // if defined


vector<pair<int,int>>v;

int n;
cin>>n;
for(int i=0;i<n;i++)
{
	int x,y;
	cin>>x>>y;
	v.push_back(make_pair(x,y));

}

print(v);






	
}