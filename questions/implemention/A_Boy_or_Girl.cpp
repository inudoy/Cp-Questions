#include<bits/stdc++.h>
using namespace std;

int main ()
{
    //write your code here
    string s;
    cin>>s;
    int odd_cn=0;
    sort(s.begin(),s.end());
    
    for(int i =0 ; i<s.length(); i++)
    {
        if(s[i]!= s[i+1])
        {
            odd_cn++;
        }
      
    }
   
    if(odd_cn%2 !=0)
    {
          cout<<"IGNORE HIM!"<<endl;
         
    }
    else
    {
        cout<<"CHAT WITH HER!"<<endl;
      
    }
    //return with 0 
    return 0;
}