// #include<bits/stdc++.h>
// using namespace std;

// int main ()
// {
//     //write your code here
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//     cin>>n;

//     int a[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }
//      for (int i=0; i < n; i++)
//     {
//         cout<<a[i]<<" ";
//         int aa=a[i];//storing i th array in aa

//         for (int j=i+1; j<n; j++)
//         {
//              aa=max(aa,a[j]);//all the time i am taking the max element of subarray
//             cout<<aa<<" ";
//         }
        
        

//     }
//     cout<<endl;
//     }
//     //return with 0 
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array
#define all(v)	 ((v).begin()), ((v).end())
#define rall(v) (((v).rbegin()), ((v).rend())
#define d(x) double(x)
#define pb(x) push_back(x)
#define sz(x) x.size()
#define fi first
const int MAX_N=1e3+2;
ll n;
 
 
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;++i) cin >> a[i];
        for(int i=0;i<n;++i){
            for(int j=i;j<n;++j){
                int ans=-INT_MAX;
                for(int k=i;k<=j;++k) ans=max(ans, a[k]);
                cout << ans << " ";
            }
        }
        cout << endl;
    }
 
}
 
 
 
 