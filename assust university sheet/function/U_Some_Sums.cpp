#include <bits/stdc++.h>
using namespace std;

// Function to calculate the sum based on given conditions
void some_sum(int n, int a, int b) {
    int sum = 0;

    for (int i = 1; i <= n; i++) {
       
            int d = 0;
            int k = i;
  
            while (k >0) {
                 int   rem=k%10;
                d += rem;
                k /= 10;
            }
            if (d>= a && d <= b ) {
                sum += i;
            }

   
}
 cout << sum << endl;
        
    }

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    some_sum(n, a, b);
    return 0;
}
