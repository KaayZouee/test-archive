#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    string evens;
    for (char c : s) {
        if ((c - '0') % 2 == 0)
            evens += c;
    }

    string result = evens;
    reverse(evens.begin(), evens.end());
    result += evens;

    cout << result << "\n";
    return 0;
}