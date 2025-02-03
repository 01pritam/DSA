#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    sort(arr.begin(), arr.end());
    int i = 0, j = 0, cnt = 0;
    while (j < n) {
        if (arr[j] - arr[i] <= k) {
            cnt += j - i;
            j++;
        } else {
            i++;
        }
    }
    cout << cnt << endl;
}