#include<bits/stdc++.h>
using namespace std;

int main ()
{
    //write your code here
    int n;
    cin>>n;
    int a[n];
    int b[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
      for(int i=0; i<n; i++)
    {
            b[i]=a[n-1-i];
    }
    int c=0;
      for(int i=0; i<n; i++)
    {
        if(a[i]==b[i])
        {
            c++;
        }
    }
    if(c==n)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    //return with 0 
    return 0;
}