#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int main ()
{
    //write your code here
    cout<<fixed<<""<<setprecision(3);
    float a;
    cin>>a;

    int b = int (a);

    float c = a-b;

    if(c==0)
    {
        cout<<"int "<<b<<endl;
    }
    else{
        cout<<"float "<<b<<" "<<c<<endl;
    }
    //return with 0 
    return 0;
}