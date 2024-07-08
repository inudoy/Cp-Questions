#include<bits/stdc++.h>
using namespace std;

int main ()
{
    //write your code here
    int n;
    cin>>n;

    int a[n],b[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
      
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        
    }
int s=0;
int k=0;
     for(int i=0;i<n;i++)
    {
        s+=a[i];
       
    }
     for(int i=0;i<n;i++)
    {
       
        k+=b[i];
    }
    
    if(s==k)
    {
        cout<<"yes"<<endl;

    }
    else
    {
        cout<<"no"<<endl;
    }
    return 0;
}