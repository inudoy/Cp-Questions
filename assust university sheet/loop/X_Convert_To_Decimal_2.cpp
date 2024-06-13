#include<bits/stdc++.h>
using namespace std;

int main ()
{
    //write your code here
int t;
cin>>t;
while(t--)
{
        int bn;
    cin>>bn;
    int rem;
    int ans=0;
    while(bn!=0)
    {
        rem=bn%2;
       if(rem==1)
       {
         ans++;
       }
        bn/=2;

    }
   
  
    int final_ans=0;
    int p=0;
    for(int i=1; i<=ans;i++)
    {
        final_ans+=(1)*pow(2,p);
      p++;
        
    }
       cout<<final_ans<<endl;
}
   
    //return with 0 
    return 0;
}

// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int main()
// {
// int t;
// cin>>t;

// for(int i=1;i<=t;i++)
// {
//     int cntr=0;
//     int n;
//     cin>>n;
//     while(n!=0)
//     {
//         int digit=n%2;
//         if(digit==1)
//         {
//             cntr++;
//         }
//         n/=2;
//     }
//     int p=0;
//     int dec=0;
//     for(int k=1;k<=cntr;k++)
//     {
//         dec+=(1*pow(2,p));
//         p++;
//     }
//     cout<<dec<<endl;

// }
// }

