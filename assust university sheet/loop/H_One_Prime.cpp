#include<bits/stdc++.h>
using namespace std;

int main ()
{
    //write your code here
    int  n;
    cin>>n;
    bool p = true;
    for(int i =2 ; i<n ; i++)
    {
        if(n%i==0)
        {
            p=false;
            break;
        }
      
    }

    if(p==true)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    //return with 0 
    return 0;
}