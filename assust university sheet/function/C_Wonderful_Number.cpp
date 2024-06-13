#include<bits/stdc++.h>
using namespace std;

int binary(int a)
{   int rem;
    string ans;
    while(a!=0)
    {
        rem=a%2;
       if(rem==0)
       {
        ans+='0';
       }
       else
       {
        ans+='1';
       }
        a/=2;
        

    }
    string ans2=ans;
    reverse(ans2.begin(),ans2.end());
    if(ans2==ans)
    {
        return 1;
    }
    else
    {
        return 0;
    }


   
    
    


}
int iseven(int a)
{
    if(a%2!=0)
    {
       return 1;
    }
    else
    {
         return 0;
    }
}

int main ()
{
    //write your code here
    int a;
    cin>>a;
    if(iseven(a)==1 && binary(a)==1)
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