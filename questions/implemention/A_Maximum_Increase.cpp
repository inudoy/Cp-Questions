#include<bits/stdc++.h>
using namespace std;
long long n;
long long *a; 
int main ()
{
    //write your code here
    
    cin>>n ;
a=new long long [n]; //dynamic array 
    
    for(long long i=0; i < n ; i++)
    {
        cin>>a[i];
    } 
    long long cn =1, max =1; 
    int j ;
    
    for (long long  i = 0; i < n-1; i++)
    {
        if(a[i]< a[i+1])
        {
            cn++;
        }
        else 
        {

            cn=1;
        }
        if(cn>max)
        {
            max=cn;
        }
    }
  cout<<max;
  
    //return with 0 
    return 0;
}