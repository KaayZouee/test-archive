#include <bits/stdc++.h>
/* backtracking */
using namespace std;

string num_max(string N, int K) {
    string S = "";
    for (char digit : N) {
        while (!S.empty() && K > 0 && S.back() < digit) {
            S.pop_back();
            K--;
        }
        S.push_back(digit);
    }
    while (K > 0) {
        S.pop_back();
        K--;
    }
    return S;
}

int main() {
    string N;
    int K;
    cin >> N >> K;
    cout << num_max(N, K);
}
