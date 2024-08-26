
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

queue<int>q;

for(int i=0; i<n ;i++)
{
	int in;
	cin>>in;

	q.push(in);
}

while(!q.empty())
{
	cout<<q.front()<<" ";
	q.pop();
}





	
}