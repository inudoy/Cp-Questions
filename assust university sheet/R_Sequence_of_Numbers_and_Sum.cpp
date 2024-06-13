#include<bits/stdc++.h>
using namespace std;

int main ()
{
    //write your code here
   
    
    while(1)
    {
        int m , n ;
        cin>>m>>n;
          if (m <= 0 || n <= 0) // If either input is non-positive, break the loop
        {
            break;
        }
        int s=0;

 
     
           if(m<n )
        {
            for(int i =m ; i<=n ; i++)
            {
                s+=i;
                cout<<i<<" ";
            }
            cout<<"sum ="<<s<<endl;
        }else if(m>=n)
        {
             for(int i=n ; i<=m ; i++)
            {
                s+=i;
                cout<<i<<" ";
            }
            cout<<"sum ="<<s<<endl;
        }
     }
     
    
    //return with 0 
    return 0;
}