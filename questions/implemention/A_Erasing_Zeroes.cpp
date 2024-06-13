#include<bits/stdc++.h>
using namespace std;

int main ()
{
    //write your code here
   int t; 
   cin>>t;
   
   while(t--)
   {
     string s;
    cin>>s;
    int c=0;
    int f=-1;
    int l=-1 ;
    for(int i =0 ; i < s.size(); i++)
    {
        if(s[i]=='1' )
        {
          
            f=i;
            break;
        }
        


    }
  

      for(int i =s.size()-1; i >=0; i--)
    {
        if(s[i]=='1')
        {
          
            l=i;
            // cout<<l;
            break;
        }
        

        
    }

 if(f>=0 && l>=0)
 {
         for(int j =f ; j < l; j++)
    {
        if(s[j]=='0')
        {
          
          c++;
        }
        

        
    }

 }

    cout<<c<<endl;
   }
    //return with 0 
    return 0;
}

 /*
 
 0 1 0 0 1 1 
 
 */