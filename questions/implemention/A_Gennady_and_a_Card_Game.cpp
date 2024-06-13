#include<bits/stdc++.h>
using namespace std;

int main ()
{
    //write your code here
    string a;
    cin>>a;

    //5 inputs 
    string b , c  , d , e , f ;
     cin >> b >> c >> d >> e >> f ;

     if(((a[0]==b[0] )|| (a[1]==b[1])) ||
        ((a[0]==c[0] )|| (a[1]==c[1])) ||
        ((a[0]==d[0] )|| (a[1]==d[1])) ||
        ((a[0]==e[0] )|| (a[1]==e[1])) ||
        ((a[0]==f[0] )|| (a[1]==f[1]))    )
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