#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    ios::sync_with_stdio(false);

    int C, Q;
    double T;

    cin >> C >> Q;

    switch (C) {
        case 1:
            T = 4.00*Q;
            break;
        case 2:
            T = 4.50*Q;
            break;
        case 3:
            T = 5.00*Q;
            break;
        case 4:
            T = 2.00*Q;
            break;
        case 5:
            T = 1.50*Q;
            break;
    }

    cout << "Total: R$ " << fixed << setprecision(2) << T << endl;

    return 0;
}