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
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
             int k=INT_MAX;
     for(int i=0;i<n; i++)
     {
        for(int j=i+1; j<=n-1; j++)
        {
            if(a[0]==2)
    {
               k=3+1;
            }
            else if(a[n-1]==2)
            {
        k=2+1;
             }
        //     else if(a[0]==1 && a[1]==1)
        //     {
        //         k=a[0]-a[1]+1;
        //     }
            if(a[i]>=a[j] )
            {
                if(a[i]<k)
                {
                    k=a[i];
                }
            }else if(a[i]<a[j] )
            {
                if(a[j]<k)
                {
                    k=a[j];
                }
            }

        }

     }

     cout<<k-1<<endl;
    }
    
    //return with 0 
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    //write your code here
    int t;
    cin>>t;

    while (t--)
    {
        //taking input
        int kl;
        cin>>kl;

        vector<int>b(kl);
        for(int i=0; i<kl ; i++)
        {
            cin>>b[i];
        }
        int carry=INT_MAX,answer;
        for(int j=0; j<kl-1; j++)
        {
            answer=max(b[j],b[j+1]);
            carry=min(carry,answer);
        }
        carry--;
        cout<<carry<<endl;
        
    }
    
    //return with 0 
    return 0;
}
*/