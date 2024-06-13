#include<bits/stdc++.h>
using namespace std;

int main ()
{
    //write your code here
    int n ;
    cin>>n;
    int sum=0;
    int mm=sqrt(25);
    cout<<mm<<endl;
    for (int  i = 1; i<=mm+1; i++)
    {
     sum+=i;
    }
    cout<<sum;
    //return with 0 
    return 0;
}