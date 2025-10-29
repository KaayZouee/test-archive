#include <bits/stdc++.h>
using namespace std;
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M, K;
    vector<int> Z;
    cin >> N >> M >> K;
    for (int v = 0; v < N; v++){
        int temp;
        if (!(cin >> temp)) return 1;
        Z.push_back(temp);
    }
    Z.insert(Z.begin() + K, M);
    for (auto i : Z)
        printf("%d\n", i);
    
    return 0;
}