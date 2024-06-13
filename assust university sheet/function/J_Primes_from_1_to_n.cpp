#include<bits/stdc++.h>
using namespace std;
void prime(int n)
{
   
   int f;

    for(int i=2;i<=n; i++)
    {f=0;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                f=1;
                break;
            }
        }
        if(f==0 && n!=0)
        {
            cout<<i<<" ";
        }
    }
     
}
int main ()
{
    //write your code here
    int n;
    cin>>n;
   
    
    prime(n);
    //return with 0 
    return 0;
}