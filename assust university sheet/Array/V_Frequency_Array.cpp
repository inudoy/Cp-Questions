<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
 //TC _ O(N)
 //space o(m)
int main ()
{
    //write your code here
    int m,n;
    cin>>m>>n;

    int a[m];
    vector<int> c(1000000, 0);

    for(int i=1; i<=m; i++)
    {
        cin>>a[i];
        c[a[i]]++;
    }
    //return with 0 


    for (int i=1; i<=n; i++)
    {
       cout<<c[i]<<endl;
    }
    
=======
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
>>>>>>> 1a0409cfe0719da9a0b6d9f8063b297cbdd5aea2
    return 0;
}