#include<bits/stdc++.h>
using namespace std;

int main ()
{
    //write your code here
    char c;
    cin>>c;

    if(c >= 'A' && c<='B')
    {
        cout<<"ALPHA\nIS CAPITAL"<<endl;
    }else if(c >= 'a' && c<='b')
    {
               cout<<"ALPHA\nIS SMALL"<<endl;
    }else if(c >= '0' && c<='9')
    {
                      cout<<"IS DIGIT"<<endl;
    }
    //return with 0 
    return 0;
}