#include<bits/stdc++.h>
using namespace std;

int main ()
{
    //write your code here
    int n;
    cin>>n;

    for (int  i = 1; i <=n; i++)
    {
       if(n%i==0)
       {
        cout<<i<<endl;
       }
    }
    
    //return with 0 
    return 0;
}