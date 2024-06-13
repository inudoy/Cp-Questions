#include<bits/stdc++.h>
using namespace std;
int gcd (int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
}
int main ()
{
    int a, b;
    cin>>a>>b;
    //write your code here
    cout<<gcd(a,b)<<endl;
    //return with 0 
    return 0;
}