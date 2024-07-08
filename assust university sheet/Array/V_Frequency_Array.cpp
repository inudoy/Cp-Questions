#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write your code here
    int n, m;
    cin >> n >> m;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
     
    for (int j = 0; j < m; j++)
    {
       int c=0;
        for (int i = 0; i < n; i++)
        {
            if(a[j]==a[i])
            {
                  c++;
            }
        }
       cout<<c<<endl;
    }
     
    // return with 0
    return 0;
}