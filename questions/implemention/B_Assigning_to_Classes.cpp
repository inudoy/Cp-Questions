#include<bits/stdc++.h>
using namespace std;

int main ()
{
    //write your code here
    int t;
    cin>>t;

    while (t--)
    {
     int n;
     cin>>n;
     vector<int>arr(2*n);

     for(int i=0;i<2*n; i++)
     {
        cin>>arr[i];
     }

    sort(arr.begin(),arr.end());
    cout<<abs(arr[n]-arr[n-1])<<endl;


    }
    
    //return with 0 
    return 0;
}