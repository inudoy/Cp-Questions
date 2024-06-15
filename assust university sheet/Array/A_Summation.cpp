#include<bits/stdc++.h>
using namespace std;
void udoy(long long a, long long arr[])
{
    long long sum=0;
    for(int i=0;i<a; i++)
    {
        sum+=arr[i];
    }
    cout<<abs(sum)<<endl;
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