#include<bits/stdc++.h>
using namespace std;
int k , c[500]; string as;

int main ()
{
    //write your code here
    cin>>k>>as;

    for(int i =0;i<as.size();i++)
    {
        c[as[i]-'a']++;
    }
    for(int i=0 ; i<26 ; i++)
    {
        if(c[i]%k!=0)
        {
            cout<<"-1";
            return 0;
        }
    }

    for(int i=0;i<k;i++)
    {
        for(int j=0;j<26;j++)
        {
            for(int l=0;l<c[j]/k;l++)
            {
                cout<<(char)(j+'a');
            }
        }
    }
    //return with 0 
    return 0;
}
//didnot understand