#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};

int main() {
    Solution solution;

    string s, t;
    cout << "Enter first string (s): ";
    cin >> s;
    cout << "Enter second string (t): ";
    cin >> t;

    if (solution.isAnagram(s, t)) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }

    return 0;
}