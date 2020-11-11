#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N, L;
  cin >> N >> L;

  vector<string> Str{};

  for (int i = 0; i < N; i++) {
    string S;
    cin >> S;
    Str.emplace_back(S);
  }
  
  sort(Str.begin(), Str.end());

  string ans;
  for (int i = 0; i < N; i++) {
    ans += Str[i];
  }
  
  cout << ans << endl;
}
