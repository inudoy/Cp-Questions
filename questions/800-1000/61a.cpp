#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE //if not defined
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif // if defined

    string s, g;
    cin >> s >> g;
    string a = "";

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == g[i])
        {
            a += '0';  // Append '0' to the string a
        }
        else
        {
            a += '1';  // Append '1' to the string a
        }
    }

    cout << a << endl;

    return 0;
}
