#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, K;
    cin >> n >> K;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    int j = 0, count = 0;
    map<int, int >mp;
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
        while (mp.size() > K) {
            mp[arr[j]]--;
            if (mp[arr[j]] == 0) mp.erase(arr[j]);
            j++;
        }
        count += i - j + 1;
    }
    cout << count << endl;
}