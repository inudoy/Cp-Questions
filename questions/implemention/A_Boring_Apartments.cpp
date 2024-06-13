#include<bits/stdc++.h>
using namespace std;

int main ()
{
    //write your code here
    int n;
    cin>>n;
    while(n--)
    {
        int a  ; 
        cin>>a;
        int d= a%10;
    int c=0;
        while(a>0)
        {
            a/=10;
            c++;
        }
        if(c==1)
        {
            cout<<(d*10)-10+1<<endl;
        }

       else if(c==2)
        {
            cout<<((d-1)*10)+3<<endl;
        }else   if(c==3)
        {
            cout<<((d-1)*10)+6<<endl;
        }else   if(c==4)
        {
            cout<<((d-1)*10)+10<<endl;
        }
    }
    //return with 0 
    return 0;
}