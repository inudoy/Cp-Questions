#include<bits/stdc++.h>
using namespace std;

int main ()
{
    //write your code here
    int t;
    cin>>t;
    while (t--)
    {
       int n;
       cin>>n;

       cout<<2<<endl;
    cout<<n<<" "<<n-1<<endl;
       int x=n;
       int y=n-2;

       while (x>=3 && y>=1)
       {
        cout<<x<<" "<<y<<endl;
        x--;
        y--;
       }
       
    }
    
    //return with 0 
    return 0;
}