#include<bits/stdc++.h>
using namespace std;

int main ()
{
    //write your code here
    char c;
    cin>>c;
    if(c>='A' && c<='Z')
    {
        cout<<char((c-'A')+'a');
    }
    else if(c>='a' && c<='z')
    {
        cout<<char((c-'a')+'A');
    }
    //return with 0 
    return 0;
}