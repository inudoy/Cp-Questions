#include<bits/stdc++.h>
using namespace std;

int main ()
{
    //write your code here
    char v;
    int a , x;
    cin>>a>>v>>x;

if(v=='>' && a>x)
{
    cout<<"Right"<<endl;
}
else if(v=='<' && a<x)
{
    cout<<"Right"<<endl;
}
else if(v=='=' && a==x)
{
    cout<<"Right"<<endl;
}
else 
{
    cout<<"Wrong"<<endl;
}

    //return with 0 
    return 0;
}