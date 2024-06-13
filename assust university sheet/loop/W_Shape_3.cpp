#include<bits/stdc++.h>
using namespace std;

int main ()
{
    //write your code here
    int n;
    cin>>n;
//1st part
    for(int i =1 ; i<=n ; i++)
    {
        for(int j =1 ; j<=(n-i);j++)
        {
            cout<<" ";
        }
         for(int j =1 ; j<=(2*i)-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

//2nd part 
       for(int i =1 ; i<=n ; i++)
    {
        for(int j =2; j<=(i);j++)
        {
            cout<<" ";
        }
         for(int j =1 ; j<=(2*n)-(2*i)+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    //return with 0 
    return 0;
}