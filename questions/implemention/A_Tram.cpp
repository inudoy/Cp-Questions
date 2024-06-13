#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int result(int n )
{
    int c=0;
    int total=0;
    for(int i=0;i<n; i++)
    {
        int a,b;
        cin>>a>>b;
        total-=a;
        total+=b;
c=max(c,total);

       
      
    }
     
      return c;
}
int main ()
{
    //write your code here
    int n;
    cin>>n;
  cout<<  result(n);
    
    //return with 0 
    return 0;
}