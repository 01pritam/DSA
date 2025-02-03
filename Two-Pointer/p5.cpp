#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, K;
    cin >> n >> K;
    string s;
    cin >> s;
    
    int i = 0, maxi = 0;
    multiset<char> ms;
    for (int j = 0; j < n; j++) {
        ms.insert(s[j]);
        while (*ms.rbegin() - *ms.begin() > K) {
            ms.erase(ms.find(s[i++]));
        }
        maxi = max(maxi, j - i + 1);
    }
    cout << maxi << endl;
}