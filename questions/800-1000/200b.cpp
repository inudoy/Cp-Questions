#include<bits/stdc++.h>
using namespace std;

void solution()
{
	int n;
	cin>>n;

	int a[n];
	int s=0;

	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	for(int i=0; i<n; i++)
	{
		s+=a[i];
	}

	float ans=float(s)/float(n);
	cout << fixed << setprecision(12) << ans << endl;
	

}

int main()
{
	#ifndef ONLINE_JUDGE //if not defined
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif // if defined

	



solution();



	
}