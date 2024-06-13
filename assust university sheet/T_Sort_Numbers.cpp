#include<bits/stdc++.h>
using namespace std;

int main ()
{
  
     int a[3];
     int t[3];
    for (int  i = 0; i < 3; i++)
    {
       cin>>a[i];
       t[i]=a[i];
    }
    
    for(int i =0 ; i< 3; i++)
    {
        for(int j=i+1; j<3; j++)
        {
            if(a[i]>a[j])
            {
                swap(a[i],a[j]);
            }
        }
    }
for (int  i = 0; i < 3; i++)
{
    cout<<a[i]<<endl;
}
cout<<endl;
for (int  i = 0; i < 3; i++)
{
    cout<<t[i]<<endl;
}

    
    //return with 0 
    return 0;
}

//below one is also correct 

// #include<bits/stdc++.h>
// using namespace std;

// int main ()
// {
//     int a[3];
//     int t[3];
//     //write your code here
//     for (int i = 0; i < 3; i++)
//     {
//        cin>>a[i];
//         t[i]=a[i];
//     }

//     for (int i = 0; i < 3; i++)
//     {
//         sort(a,a+3);
//     }

//      for (int i = 0; i < 3; i++)
//     {
//         cout<<a[i]<<endl;
//     }
//     cout<<endl;
//     for (int i = 0; i < 3; i++)
//     {
//        cout<<t[i]<<endl;
//     }
    
    
//     //return with 0 
//     return 0;
// }
