#include<bits/stdc++.h>
using namespace std;

int main ()
{
    //write your code here
    int n;
    cin>>n;
    int k ;
    cin>>k;
    int t;
    while (k--)
    {
        /* code */
        int rem=n%10;
        if(rem==0)
        {
            n/=10;
        }
        else
        {
            n-=1;
        }
        t=n;
    }
    cout<<t<<endl;
    //return with 0 
    return 0;
}