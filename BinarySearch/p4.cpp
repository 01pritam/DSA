#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    int left = 0, right = n - 1;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (mid % 2 == 0) {
            if (a[mid] == a[mid + 1]) left = mid + 2;
            else right = mid;
        } else {
            if (a[mid] == a[mid - 1]) left = mid + 1;
            else right = mid - 1;
        }
    }
    
    cout << a[left] << endl;
}