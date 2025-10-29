#include <bits/stdc++.h>
using namespace std;
int main (){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  string inp_hoten;
  getline(cin, inp_hoten);
  transform(inp_hoten.begin(), inp_hoten.end(), inp_hoten.begin(), ::tolower);
  // transform(InputBegin, InputEnd, OutputBegin, Function);
  istringstream stream(inp_hoten);
  string word;
    while (stream >> word) {
        // capitalize first letter
        if (!word.empty() && isalpha(word[0])) {
            word[0] = toupper(word[0]);
        }
        cout << word << " ";
    }

    cout << "\n";
  return 0;
}