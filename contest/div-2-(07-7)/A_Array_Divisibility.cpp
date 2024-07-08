#include <iostream>
#include <vector>

std::vector<int> beautifulArray(int n) {
    std::vector<int> arr(n, 1);
    for (int k = 1; k <= n; ++k) {
        int total = 0;
        for (int j = k; j <= n; j += k) {
            total += arr[j - 1];
        }
        int remainder = total % k;
        if (remainder != 0) {
            arr[k - 1] += k - remainder;
        }
    }
    return arr;
}

int main() {
    int t;
    std::cin >> t;
    for (int i = 0; i < t; ++i) {
        int n;
        std::cin >> n;
        std::vector<int> arr = beautifulArray(n);
        for (int j = 0; j < n; ++j) {
            std::cout << arr[j];
            if (j < n - 1) {
                std::cout << ' ';
            }
        }
        std::cout << '\n';
    }
    return 0;
}