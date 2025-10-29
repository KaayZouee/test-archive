#include <bits/stdc++.h>
using namespace std;

string to_string_custom(long long n) {
    return to_string(n);
}

void solve() {
    long long K;
    if (!(cin >> K)) return;

    long long n = 1;
    while (true) {
        long long square = n * n;
        string s_square = to_string_custom(square);
        long long length = s_square.length();

        if (K <= length) {
            cout << s_square[K - 1] << '\n';
            break;
        } 
        else {
            K -= length;
        }

        n++;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}

