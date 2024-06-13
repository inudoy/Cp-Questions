#include<bits/stdc++.h>
using namespace std;

int main ()
{
    //write your code here
    char c;
    cin>>c;

    int n;
    cin>>n;
    int e;

    while(n--)
    {
        cin>>e;
        if(e)
        {
            for(int i =1 ; i<=e ; i++)
            {
                cout<<c;
            }

        }
        cout<<endl;
    }
    //return with 0 
    return 0;
}