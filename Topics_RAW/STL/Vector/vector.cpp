#include<bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE //if not defined
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif // if defined

	

vector<int> v;
v.reserve(100);
int n;
cin>>n;

for(int i=0;i<n; i++)
{
	int n0;
	cin>>n0;
	v.push_back(n0);

	cout<<"capacity :"<<v.capacity()<<" size : "<<v.size()<<endl;
}

//to print a vector 
for(auto i : v)
{
	cout<<i<<" ";
}

cout<<endl;
vector<int>v2(2,1);//it means intializing a array of size 2 with filled with 1

v2.push_back(100);
for(auto i : v2)
{
	cout<<i<<" ";
}
cout<<endl;

v2.pop_back();

for(auto i : v2)
{
	cout<<i<<" ";
}
v2.push_back(1000);
cout<<endl;

//sorting in reverse order

sort(v2.begin(), v2.end(),greater<int>());

for(auto i : v2)
{
	cout<<i<<" ";
}
	
}