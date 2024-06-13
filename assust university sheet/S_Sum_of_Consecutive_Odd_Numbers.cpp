#include<bits/stdc++.h>
using namespace std;

int main ()
{
    //write your code here
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        if(n<0 || m <0)
        {
            return 0;
        }
    int max,min;
        if(m>n)
        {
            max=m;
            min=n;
        }
        else{
            max=n;
            min=m;
        }
           int s=0;
       
 
        for(int i=min+1 ; i<max ; i++ )
        {
            if(i%2!=0)
            {
                s+=i;
            }
        }
        cout<<s<<endl;
    }
    //return with 0 
    return 0;
}