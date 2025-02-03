#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, target;
    cin >> n >> target;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (a[mid] == target) {
            cout << mid << endl;
            return 0;
        }
        if (a[left] <= a[mid]) {
            if (a[left] <= target && target < a[mid]) right = mid - 1;
            else left = mid + 1;
        } else {
            if (a[mid] < target && target <= a[right]) left = mid + 1;
            else right = mid - 1;
        }
    }
    cout << -1 << endl;
}