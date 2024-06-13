// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int t;
//   cin >> t;

//   while (t--) {
//     int n;
//     cin >> n;

//     // Loop continues as long as n is not zero
//     while (n != 0) {
//       int rem = n % 10;
//       cout << rem << " ";
//       n /= 10;
//     }
//     cout << endl;
//   }

//   return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int main ()
{
    //write your code here
 int t;
 cin>>t;
 while(t--)
 {
   string s;
  cin>>s;

  for(int i=s.size()-1 ; i>=0; i--)
  {
cout<<s[i]<<" ";
  }
  cout<<endl;
 }
    //return with 0 
    return 0;
}