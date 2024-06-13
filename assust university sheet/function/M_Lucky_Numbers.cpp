#include<bits/stdc++.h>
using namespace std;


void lucky(int n,int p)
{
    int f;
    int d=0;
    for(int i=n; i<=p; i++)
    {
        string s=to_string(i);
        int c=0;
        for(int j=0;j<s.size();j++)
        {
            if(s[j]=='4' || s[j]=='7')
            {
            c++;
            
            }
            else{
        continue;
   
        
       }
        }
        if(s.size()==c)
        {
            cout<<i<<" ";
            d++;
        }
        
       
        
    }
    if(d==0)
    {
        cout<<-1<<endl;
    }

   
}

int main ()
{
    //write your code here
    int n,p;
    cin>>n>>p;
    lucky(n,p);
    //return with 0 
    return 0;
}