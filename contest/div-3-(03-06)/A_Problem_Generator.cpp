#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    string s;
    cin>>n>>m;
    cin>>s;

    int A=m, B=m, C=m, D=m, E=m, F=m, G=m;

    for(int i=0; i<n; i++)
    {
        if(s[i] == 'A' && A != 0)
        {
            A--;
        }
        else if(s[i] == 'B' && B != 0)
        {
            B--;
        }
        else if(s[i] == 'C' && C != 0)
        {
            C--;
        }
        else if(s[i] == 'D' && D != 0)
        {
            D--;
        }
        else if(s[i] == 'E' && E != 0)
        {
            E--;
        }
        else if(s[i] == 'F' && F != 0)
        {
            F--;
        }
        else if(s[i] == 'G' && G != 0)
        {
            G--;
        }

    }

    cout<<A+B+C+D+E+F+G<<endl;
}

int main()
{
    int test_case;
    cin >> test_case;

    while (test_case--)
    {
        solve();
    }

    return 0;
}
//ata ekhtiar solve korse
