#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    int i = 0, sum = 0, cnt = 0;
    for (int j = 0; j < n; j++) {
        sum += arr[j];
        while (sum > k) sum -= arr[i++];
        cnt += j - i + 1;
    }
    cout << cnt << endl;
}