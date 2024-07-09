#include<bits/stdc++.h>
using namespace std;
 //TC _ O(N)
 //space o(m)
int main ()
{
    //write your code here
    int m,n;
    cin>>m>>n;

    int a[m];
    vector<int> c(1000000, 0);

    for(int i=1; i<=m; i++)
    {
        cin>>a[i];
        c[a[i]]++;
    }
    //return with 0 


    for (int i=1; i<=n; i++)
    {
       cout<<c[i]<<endl;
    }
    
    return 0;
}