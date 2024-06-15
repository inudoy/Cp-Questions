#include<bits/stdc++.h>
using namespace std;
long long udoy(long long a, long long arr[],long long sum)
{
    
    for(int i=0;i<a; i++)
    {
       if(arr[i]==sum)
       {
        return i;
        break;
       }
    }
    return -1;
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
    long long sum;
    cin>>sum;
   if( udoy(a,arr,sum)>=0)
   {
    cout<<udoy(a,arr,sum)<<endl;
   }
   else
   {
    cout<<udoy(a,arr,sum)<<endl;
   }
    //return with 0 
    return 0;
}