#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    ios::sync_with_stdio(false);

    double A, B, C;
    cin >> A >> B >> C;
    cout << "MEDIA = " << fixed << setprecision(1) << (A*2+B*3+C*5)/10.0  << endl;

    return 0;
}