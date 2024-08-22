#include<bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE //if not defined
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif // if defined

	
array<int,6>arr;
for(int i=0; i<6; i++)
{
	cin>>arr[i];
}


// for(auto i:arr)
// {
// 	cout<<i<<" ";
// }


sort(arr.begin(),arr.end());
//sort(arr.begin(),arr.end(),greater<int>())  reverse sort

for(auto i:arr)
{
	cout<<i<<" "<<endl;
}


array<int,10>ab;
ab.fill(22);

for(auto i:ab)
{
	cout<<i<<" ";
}
	
}