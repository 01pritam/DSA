#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    unordered_set<int> s;
    int max_len = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }
    for (auto &num : s) {
        if (!s.count(num - 1)) {
            int curr_num = num;
            int curr_len = 1;
            while (s.count(curr_num + 1)) {
                curr_num++;
                curr_len++;
            }
            max_len = max(max_len, curr_len);
        }
    }
    cout << max_len << endl;
}
