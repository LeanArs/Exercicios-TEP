#include <iostream>

using namespace std;

int main() {

    ios::sync_with_stdio(false);

    int T1, T2, T3, T4, N;
    cin >> T1 >> T2 >> T3 >> T4;
    
    N = T1 + T2 + T3 + T4 - 3;

    cout << N << endl;

    return 0;
}
