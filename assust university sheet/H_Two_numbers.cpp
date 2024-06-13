#include<bits/stdc++.h>
using namespace std;

int main ()
{
    //write your code here
    float a , v;
    cin>>a>>v;

    cout<<"floor "<<a<<" / "<<v<<" = "<<floor(a/v)<<endl;
    cout<<"ceil "<<a<<" / "<<v<<" = "<<ceil(a/v)<<endl;
    cout<<"round "<<a<<" / "<<v<<" = "<<round(a/v)<<endl;

    //return with 0 
    return 0;
}