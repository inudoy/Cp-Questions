/*
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, f, k, duplicate = 0, fnum, hand;
    cin >> n >> f >> k;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    fnum = arr[f-1];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == fnum)
        {
            duplicate++;
        }
    }

    hand = duplicate;

    sort(arr.rbegin(), arr.rend());

    for(int i=0; i<k; i++)
    {
        if(arr[i] == fnum)
        {
            duplicate--;
        }
    }

    if(duplicate==0)
    {
        cout<<"YES"<<endl;
    }
    else if(hand != duplicate)
    {
        cout<<"MAYBE"<<endl;
    }
    else if(hand == duplicate)
    {
        cout<<"NO"<<endl;
    }
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
*/


// #include<bits/stdc++.h>
// using namespace std;
// void ans()
// {
//     int n, f , k ;
//     cin>>n>>f>>k;
//     vector<int>a(n);

//     for(int i =1 ; i <=n; i++)
//     {
//         cin>>a[i];
//     }
//     int fav=a[f];
//     int dup=0;
//     for (int i = 1  ; i <=n; i++)
//     {
//        if(a[i]==fav)
//        {
//         dup++;
//        }
//     }
//     int h=dup;
//  sort(a.rbegin(), a.rend());
//  for(int i =1 ; i<=k ; i++)
//  {
//     if(a[i]==fav)
//     {
//         dup--;
//     }
//  }

//  if(dup==0)
//  {
//     cout<<"YES"<<endl;
//  }
//  else if(dup!=h)
//  {
//     cout<<"MAYBE"<<endl;
//  }
//  else if(dup==h)
//  {
//     cout<<"NO"<<endl;
//  }
    
    

// }
// int main ()
// {
//     //write your code here
//     int t;
//     cin>>t;

//     while(t--)
//     {
//         ans();
//     }
//     //return with 0 
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void ans() {
    int n, f, k;
    cin >> n >> f >> k;
    vector<int> a(n + 1); // Correct size to accommodate 1-based indexing

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int fav = a[f];
    int dup = 0;

    for (int i = 1; i <= n; i++) {
        if (a[i] == fav) {
            dup++;
        }
    }
    int h = dup;

     sort(a.rbegin(), a.rend()-1);

    for (int i = 1; i <= k; i++) {
        if (a[i] == fav) {
            dup--;
        }
    }

    if (dup == 0) {
        cout << "YES" << endl;
    } else if (dup != h) {
        cout << "MAYBE" << endl;
    } else if (dup == h) {
        cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        ans();
    }

    return 0;
}
