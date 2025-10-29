#include <iostream>
#include <vector>
using namespace std;

bool isPerfect(int n) {
    if (n <= 1) {
        return false;
    }

    int sumOfDivisors = 1;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            sumOfDivisors += i;
            if (i * i != n) {
                sumOfDivisors += n / i;
            }
        }
    }
    return sumOfDivisors == n;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int number;
    int position = 0;
    vector<int> perfectPositions;

    while (cin >> number && number != 0) {
        position++;
        if (isPerfect(number)) {
            perfectPositions.push_back(position);
        }
    }
    if (perfectPositions.empty()) {
        printf("-1\n");
    } else {
        for (size_t i = 0; i < perfectPositions.size(); ++i) {
            printf("%d\n", perfectPositions[i]);
        }
    }
    return 0;
}