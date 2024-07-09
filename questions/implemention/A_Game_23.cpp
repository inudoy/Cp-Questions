#include<bits/stdc++.h>
using namespace std;

int main ()
{
    //write your code here
    int m, n;
    cin>>m>>n;
    int c=0;
    while(m<=n)
    {
        if(n==m)
        {
            cout<<"0"<<endl;
            return 0;
        }
        if(n/m<1)
        {
            cout<<"-1"<<endl;
            return 0;
        }
        if(n%3==0 && n%2!=0)
        {
            n/=3;
            c++;
        }
        else if(n%3!=0 && n%2==0)
        {
            n/=2;
            c++;
        }
        else if(n%3==0 && n%2==0)
        {
            n/=2;
            c++;
        }
    }
    cout<<c;
    //return with 0 
    return 0;
}