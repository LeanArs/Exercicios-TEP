#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(0); \
              cin.tie(0); \
              cout.tie(0)

int main() {
    fastio;
    
    int n;
    string s;
    cin >> n >> s;
    
    int remove = 0;
    for (int i = 1; i < n+1; i++) {
        if(s[i-1] == s[i]) {
            remove++;
        }
    }
    
    cout << remove << endl;

    return 0;
}
