#include<bits/stdc++.h>
using namespace std;

int main ()
{
    //write your code here
  long long  a, b, c, d;
    cin>>a>>b>>c>>d;

    a=a%100;
    b=b%100;
    c=c%100;
    d=d%100;

  
    
    long long res1 =(a*b*c*d)%100;

    if(res1<10)
    {
        cout<<0<<res1;
    }
    else
    {
        cout<<res1;
    }
  

  
    //return with 0 
    return 0;
}