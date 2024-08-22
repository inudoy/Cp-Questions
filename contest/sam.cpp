#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE //if not defined
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif // if defined

int n;

   if(n < 0 || n > 1e7) { // Example threshold
        cout << "Invalid size" << endl;
        return 0;
    }  

cin>>n;

vector<int>a(n,0);



for(int i=0; i<n; i++)
{
    a[i]=n-i;
}


auto start_time=clock();

sort(a.begin(),a.end()-1);

auto end_time=clock();

cout<<end_time-start_time<<endl;








    
}