#include<bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE //if not defined
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif // if defined

int t;
cin>>t;
	
vector<int>v[t];

for(int i=0;i<t;i++)
{
	int n;
	cin>>n;
	for(int j=0;j<n;j++)
	{
		int x;
		cin>>x;
		v[i].push_back(x);
	}
}


    for(int i = 0; i <t; i++)
    {
        for(int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;  // New line after each vector's output
    }






	
}