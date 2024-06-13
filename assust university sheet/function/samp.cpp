#include<bits/stdc++.h>
using namespace std;
void ans(double a, double v)
{
    cout<<"floor "<<a<<" / "<<v<<" = "<<floor(a/v)<<endl;
    cout<<"ceil "<<a<<" / "<<v<<" = "<<ceil(a/v)<<endl;
    cout<<"round "<<a<<" / "<<v<<" = "<<round(a/v)<<endl;

}


int main ()
{
    //write your code here
    double a , v;
    cin>>a>>v;
    
     ans(a,v);
     
    //return with 0 
    return 0;
}