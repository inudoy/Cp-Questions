#include<bits/stdc++.h>
using namespace std;

int main ()
{
    //write your code here
     int n;
    cin>>n;
    int a[7];
    for(int i =0; i<7;i++)
    {
        cin>>a[i];
    }

    int sum=0;
    int c=0;
   int k;
    while (sum<n)
    {
        for (int i = 0; i < 7; i++)
        {
           
          
          
      
             sum+=a[i];
            c++;
           if(sum>=n)break;
          
        }


        
    }
    if(c>7 && c%7==0)
    {
        cout<<7<<endl;
    }
    else if (c>7 && c%7!=0)
 
     {
         cout<<c%7<<endl;
    }
    else 
     {
     cout<<c<<endl;
    }
   
    
    
    
    //return with 0 
    return 0;
}