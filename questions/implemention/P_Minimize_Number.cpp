#include<bits/stdc++.h>
using namespace std;

int main ()
{
    //write your code here
      int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k=true;
    int c=0;
    while (k)
    {
         for (int i = 0; i < n; i++)
    {
        if(a[i]%2!=0)
        {
            k=false;
            break;
        }
    }
    c++;
    }

    cout<<c;
    
 
    
    //return with 0 
    return 0;
}