#include<bits/stdc++.h>
using namespace std;
void udoy(long long a, long long arr[])
{
    
    for(int i=0;i<a; i++)
    {
       if(arr[i]<0)
       {
        arr[i]=2;
       }
       else if (arr[i]==0)
       {
        arr[i]=0;
       }
       else
       {
         arr[i]=1;
       }
    }
  
    for(int i = 0; i < a; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}
int main ()
{
    //write your code here
    long long a;
    cin>>a;
    long long arr[a];
    for(int i=0;i<a; i++)
    {
        cin>>arr[i];
    }
   udoy(a,arr);
    //return with 0 
    return 0;
}