#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    ios::sync_with_stdio(false);

    double pi = 3.14159;
    double raio;

    cin >> raio;
    cout << "VOLUME = " << fixed << setprecision(3) << (4.0/3)*pi*raio*raio*raio << endl; 

    return 0;
}