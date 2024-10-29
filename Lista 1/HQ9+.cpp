#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(0); \
              cin.tie(0); \
              cout.tie(0)

int main() {
    fastio;
    
    string p;
    cin >> p;

    bool output = false;
    int sizeP = p.size();

    for (int i = 0; i < sizeP; i++){
        if(p[i] == 'H' || p[i] ==  'Q' || p[i] ==  '9'){
            output = true;
            break;
        }
    }
    
    if(output){
        cout << "YES" << endl;
    } else{
        cout << "NO" << endl;
    }

    return 0;
}
