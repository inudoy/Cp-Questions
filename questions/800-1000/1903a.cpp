#include<bits/stdc++.h>
using namespace std;

int issort(int a[],int n)
{
	for(int i=1;i<n; i++)
	{
		if(a[i]>a[i+1])
		{
			return false;
		}
	}
	return true;
}

void solution()
{
	int n , k;
	cin>>n>>k;
	int a[n];
	for(int i=1;i<=n; i++)
	{
		cin>>a[i];
	}

	if(issort(a,n)==true && k>=1)
	{
		cout<<"YES"<<endl;
	}
	else if(k==1 && (issort(a,n)==false))
	{
		cout<<"NO"<<endl;
	}
	else
	{
		cout<<"YES"<<endl;
	}

	

}

int main()
{
	#ifndef ONLINE_JUDGE //if not defined
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif // if defined

	
int t;
cin>>t;
while(t--)
{
	solution();
}






	
}