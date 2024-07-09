#include<bits/stdc++.h>
using namespace std;

int main ()
{
    //write your code here
    int n;
    cin>>n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int c=0;
    vector<int>v;
 

    for(int i=0;i<n;i++)
    {
        int k=a[i];
        while (k!=0)
        {
            if(k%2==0)
            {
                c++;
                k/=2;
            }
            else
            {
                break;

            }
            
           
            
        }
        v.push_back(c);
        c=0;
        
    }

    sort(v.begin(),v.end());
    
    
        cout<<v[0]<<endl;
   
    
    
    //return with 0 
    return 0;
}