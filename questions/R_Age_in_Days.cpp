// #include <iostream>
// using namespace std;

// int main() {
//     int N;
//     cin >> N;
//   int years ;
//    int months;
//        int days;

//      years = N / 365;
//     N = N % 365;

//      months = N / 30;
//     N = N % 30;

//      days = N;
      

   

//     cout << years << " years" << endl;
//     cout << months << " months" << endl;
//     cout << days << " days" << endl;

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main ()
{
    //write your code here
  int y;
  cin>>y;

  int yea,mon,day;
  yea=y/365;
  y%=365;

  mon=y/30;
  y%=30;

  day=y;

  cout<< yea << " years"<<endl;
   cout<< mon << " months"<<endl;
    cout<< day << " days"<<endl;
    //return with 0 
    return 0;
}