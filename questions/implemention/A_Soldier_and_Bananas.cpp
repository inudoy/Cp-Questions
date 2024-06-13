#include<bits/stdc++.h>
using namespace std;

int main ()
{
    //write your code here
    int k,n,w;
    cin>>k>>n>>w;
    int r=0;
    for(int i=1 ; i <=w ; i++)
    {
        r+=i*k;
    }
    if(r>=n)
    {
        int ans=r-n;
        cout<<ans<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
    //return with 0 
    return 0;
}