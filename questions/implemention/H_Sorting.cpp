//selection sort 

#include<bits/stdc++.h>
using namespace std;

void selection(int a[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int min=i;
        for(int j =i+1 ; j<n; j++)
        {
            if(a[min]>a[j])
            {
                swap(a[min],a[j]);
            }
        }
    }
}

void print(int a[],int n)
{
    for(int i=0; i<n ; i++)
    {
        cout<<a[i]<<" ";
    }
}

int main ()
{
    //write your code here
    int n;
    cin>>n;
    int a[n];
    for(int i=0;  i<n ; i++)
    {
        cin>>a[i];
    }
    selection(a, n);
    print(a,n);
    //return with 0 
    return 0;
}