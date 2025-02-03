#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    
    double left = 1.0, right = x, epsilon = 1e-6;
    while (right - left > epsilon) {
        double mid = left + (right - left) / 2;
        double power = pow(mid, n);
        if (power > x) right = mid;
        else left = mid;
    }
    
    cout << fixed << setprecision(6) << left << endl;
}