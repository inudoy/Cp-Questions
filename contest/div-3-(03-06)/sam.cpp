#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE // If not defined
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // If defined

    int n;

    // Read input value for n
    cin >> n;

    // Check if n is within a valid range after initialization
    if(n < 0 || n > 1e7) { // Example threshold
        cout << "Invalid size" << endl;
        return 0;
    }  

    // Initialize the vector with n elements
    vector<int> a(n, 0);

    // Fill the vector
    for(int i = 0; i < n; i++) {
        a[i] = n - i;
    }

    // Capture the start time
    auto start_time = clock();

    // Sort the entire vector
    sort(a.begin(), a.end());

    // Capture the end time
    auto end_time = clock();

    // Output the time taken for sorting
    cout << end_time - start_time << " milliseconds" << endl;

    return 0;
}
