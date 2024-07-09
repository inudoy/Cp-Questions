#include<bits/stdc++.h>
using namespace std;

int main ()
{
    //write your code here
    int a,b;
    cin>>a>>b;

    int m[a],n[b];

    for (int i = 0; i < a; i++)
    {
       cin>> m[i];
    }

      for (int i = 0; i < b; i++)
    {
       cin>> n[i];
    }
    
    vector<int>v;

    for (int i = 0; i < a; i++)
    {
       if(n[i]==m[i])
       {
        v.push_back(m[i]);
       }
    }
    

    for (int i = 0; i <v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
    //return with 0 
    return 0;
}