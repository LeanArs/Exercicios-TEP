#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(0); \
              cin.tie(0); \
              cout.tie(0)

int main() {
   fastio;

    int on = 1;
    while (on) {

        int X, Y;
        cin >> X >> Y;

        if(X == Y){
            on = 0;
            break;
        }

        if(X > Y){
            cout << "Decrescente" << endl;
        } else {
            cout << "Crescente" << endl;
        }

    }
    
   return 0;
}
