#include<bits/stdc++.h>
using namespace std;

int main ()
{
    //write your code here
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }

   int  f , j ;
   int mini=INT_MAX;
   int maxi=INT_MIN;
    
    for (int i=0;i<n;i++)
    {
        if(a[i]<mini)
        {
            f=i;
            mini=a[i];
        }
         if(a[i]>maxi)
        {
            j=i;
            maxi=a[i];
        }
    }
    //return with 0 
   

   a[f]=maxi;
   a[j]=mini;

  

    

     for (int i = 0; i < n; i++)
    {
       cout<<a[i]<<" ";
    }
    
    return 0;
}
  