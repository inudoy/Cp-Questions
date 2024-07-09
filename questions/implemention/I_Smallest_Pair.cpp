#include<bits/stdc++.h>
using namespace std;

int main ()
{
    //write your code here
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for (int i = 1; i <=n; i++)
        {
            cin>>a[i];
        }
        long long sum_t=INT_MAX;
        
        for(int i=1;i<n; i++)
        {
            for(int j=i+1;j<=n; j++)
            {
                long long sum_p=a[i]+a[j]+(j-i);
                sum_t = min(sum_t, sum_p);
            }
        }

        cout<<sum_t<<endl;
    }
    //return with 0 
    return 0;
}