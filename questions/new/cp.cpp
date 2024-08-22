/*

                     بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ


*/





#include<bits/stdc++.h>
using namespace std;

//All the define functions
#define bug(...)	__f(#__VA_ARGS__,__VA_ARGS__)


template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
	const char* comma = strchr (names + 1, ',');
	cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}

// main solve function
void solve()
{



// bug();

}





// int main part of the code
int main()
{
	#ifndef ONLINE_JUDGE //if not defined
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif // if defined


// calling the void solve function for t testcases
int t=1;
// cin>>t;
while(t--) solve();

	
}