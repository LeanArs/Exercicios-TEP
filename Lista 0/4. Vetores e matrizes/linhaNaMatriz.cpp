#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(0); \
              cin.tie(0); \
              cout.tie(0)

int main() {
    fastio;
  
    int L;
    char T;
    float matriz[12][12];

    cin >> L;
    cin >> T;

    for (int i = 0; i < 12; i++){
        for (int j = 0; j < 12; j++){
            cin >> matriz[i][j];
        }
    }
    
    float answer = 0;
    if(T == 'S'){
        for (int i = 0; i < 12; i++){
            answer = answer + matriz[L][i];
        }
    } else if (T == 'M'){
        for (int i = 0; i < 12; i++){
            answer = answer + matriz[L][i];
        }
        answer = answer/12;
    }
  
    cout << fixed << setprecision(1) << answer << endl;

   return 0;
}
