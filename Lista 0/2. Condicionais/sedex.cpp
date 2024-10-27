#include <iostream>

using namespace std;

int main() {

    int D, A, L, P;
    cin >> D >> A >> L >> P;

    if((D <= A) && (D <= L) && (D <= P)) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}