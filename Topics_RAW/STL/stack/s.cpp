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

stack<int>s;

for(int i=0 ; i<n ; i++)
{
	int in ;
	cin>>in ;


	s.push(in);
}

while(!s.empty())
{
	cout<<s.top()<<" ";
	s.pop();
}

// last in first out method 

// 5 4 3 2 1 - input
// 1 2 3 4 5 - output



	
}