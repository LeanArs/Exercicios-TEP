#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(0); \
              cin.tie(0); \
              cout.tie(0)

int main() {
   fastio;
  
  int N, X, quantIn = 0, quantOut = 0;
  cin >> N;

  for (int i = 0; i < N; i++) {
    cin >> X;
    if (X > 9 && X < 21) {
        quantIn = quantIn + 1;
    } else {
        quantOut = quantOut + 1;
    }
  }
  
  cout << quantIn << " in" << endl;
  cout << quantOut << " out" << endl;

   return 0;
}
