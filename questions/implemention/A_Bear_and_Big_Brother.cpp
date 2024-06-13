#include <iostream>
using namespace std;

int main()
{
    int c = 0;
    int a, b;

    cin >> a >> b;
    if(a>b)
    {
        cout<<"0"<<endl;
    }
    while (a<=b)
    {
        a *= 3;
        b *= 2;
        c++;
       
    }
    cout<<c;

    return 0;
}
