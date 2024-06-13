#include<bits/stdc++.h>
using namespace std;

int main ()
{
    //write your code here
    int t;
    cin>>t;

    while(t--)
    {
        int m, n;
        cin>>m>>n;
        char mat[m][n];

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin>>mat[i][j];
            }
            
        }
    int count=0;
         for (int i= 0; i <m; i++)
        {
            
            if(mat[i][n-1]=='R')count++;//checking  the last column char is R or not
        }

        for (int j= 0; j <n; j++)
            {
                if(mat[m-1][j]=='D')count++;//checking the last char of row is D or not
            }
        cout<<count<<endl;
    }
    //return with 0 
    return 0;
}