#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    if (!freopen("PAIRLCM.INP", "r", stdin)) {
        cerr << "Khong mo duoc file PAIRLCM.INP\n";
        return 1;
    }
    if (!freopen("PAIRLCM.OUT", "w", stdout)) {
        cerr << "Khong mo duoc file PAIRLCM.OUT\n";
        return 1;
    }

    long long n;
    if (!(cin >> n)) {
        cerr << "Khong doc duoc gia tri n\n";
        return 1;
    }

    if (n == 2) { // truong hop n = 2
        cout << 1 << "\n";
        return 0;
    }

    __int128 best = 0;

    if (n % 2 == 1) {
        long long a = n / 2;
        long long b = n - a;
        best = (__int128)a * (__int128)b;
    } else {
            long long half = n / 2;
        for (long long a = half; a >= 1; --a) {
            if (std::gcd(a, n) == 1) {
                best = (__int128)a * (__int128)(n - a);
                break;
            }
        }
    }

    long long ans = (long long) best;
    cout << ans << "\n";
    return 0;
}

