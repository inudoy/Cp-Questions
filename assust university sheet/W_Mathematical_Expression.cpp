#include<bits/stdc++.h>
using namespace std;

int main ()
{
    //write your code here
    int a;
    cin>>a;
    char b;
    cin>>b;
    int c;
    cin>>c;
    char d;
    cin>>d;
    int e;
    cin>>e;

    if(b=='+')
    {
        if((a+c)==e)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<(a+c)<<endl;
        }
    }else if(b=='-')
    {
        if((a-c)==e)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<(a-c)<<endl;
        }
    }else if(b=='*')
    {
        if((a*c)==e)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<(a*c)<<endl;
        }
    }

    //return with 0 
    return 0;
}