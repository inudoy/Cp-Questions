#include<bits/stdc++.h>
using namespace std;

int main ()
{
    //write your code here
  int t;
  cin>>t;
  while(t--)
  {
      int n;
    cin>>n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
       
       int c=0;
    for (int i = 0; i < n; i++)
    {
        
       for (int j = i+1; j < n; j++)
       {
        if(a[j]>=a[j-1])c++;
        else break;
       }
       
       
    }
   cout<<c+n<<endl;
  }
    
    


    //return with 0 
    return 0;
}