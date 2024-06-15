#include <bits/stdc++.h>
using namespace std;

void udoy(long long a, long long b, long long c, long long d) {
    // Use logarithms to compare the magnitudes of a^b and c^d
    // double logA =( b * log10(a))/d * log10(c);
    // double logC = d * log10(c);

    if (( b * log10(a))>(d * log10(c))){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    
    udoy(a, b, c, d);

    return 0;
}
