#include<bits/stdc++.h>
using namespace std;
void udoy(long long a, long long arr[])
{
    long long sum=arr[0];
    for(int i=0;i<a; i++)
    {
       sum=max(sum,arr[i]);
    }
    cout<<(sum)<<endl;
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