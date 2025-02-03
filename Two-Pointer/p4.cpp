#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, K;
    cin >> n >> K;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    int left = 0, sum = 0, maxi = 0;
    for (int right = 0; right < n; right++) {
        sum += arr[right];
        while (sum > K) sum -= arr[left++];
        maxi = max(maxi, right - left + 1);
    }
    cout << maxi << endl;
}