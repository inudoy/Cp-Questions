#include<bits/stdc++.h>
using namespace std;
long long  equation(long long  x , long long  n)
{
  long long  sum=0;
    for(int i=0;i<=n;i+=2)
    {
      if(i==0)
      {
        sum+=pow(x,i)-1;
      }
      else
      {
          sum+=pow(x,i);
      }
    }
    return sum;
}
int main ()
{
    //write your code here
    long long  x,n;
    cin>>x>>n;
    cout<<equation(x,n)<<endl;
    //return with 0 
    return 0;
}