#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    ios::sync_with_stdio(false);
    double raio;
    double pi = 3.14159;

    cin >> raio;
    cout << "A=" << fixed << setprecision(4) << pi*raio*raio << endl;

    return 0;
}