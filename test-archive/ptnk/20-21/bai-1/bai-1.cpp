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

    long long best = 0;

    if (n % 2 == 1) {
        long long a = n / 2;
        long long b = n - a;
        best = a * b;
    } else {
        long long half = n / 2;
        for (long long a = half; a >= 1; --a) {
            if (gcd(a, n) == 1) {
                best = a * (n - a);
                break;
            }
        }
    }

    long long ans = (long long) best;
    cout << ans << "\n";
    return 0;
}

