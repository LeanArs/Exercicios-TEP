#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(0); \
              cin.tie(0); \
              cout.tie(0)

int main() {
    fastio;
  
    double n;
    cin >> n;

    int quantNota100 = 0, quantNota50 = 0, quantNota20 = 0, quantNota10 = 0, quantNota5 = 0, quantNota2 = 0;
    int quantMoeda100 = 0, quantMoeda050 = 0, quantMoeda025 = 0, quantMoeda010 = 0, quantMoeda005 = 0, quantMoeda001 = 0;

    // Notas
    quantNota100 = n/100;
    n = n - (quantNota100 * 100);

    quantNota50 = n/50;
    n = n - (quantNota50 * 50);

    quantNota20 = n/20;
    n = n - (quantNota20 * 20);

    quantNota10 = n/10;
    n = n - (quantNota10 * 10);

    quantNota5 = n/5;
    n = n - (quantNota5 * 5);
    
    quantNota2 = n/2;
    n = n - (quantNota2 * 2);

    n = n * 100;

    // Moedas
    quantMoeda100 = n / 100;
    n = n - (quantMoeda100 * 100);

    quantMoeda050 = n / 50;
    n = n - (quantMoeda050 * 50);

    quantMoeda025 = n / 25;
    n = n - (quantMoeda025 * 25);

    quantMoeda010 = n / 10;
    n = n - (quantMoeda010 * 10);

    quantMoeda005 = n / 5;
    n = n - (quantMoeda005 * 5);

    quantMoeda001 = n;


    cout << "NOTAS:" << endl;
    cout << quantNota100 << " nota(s) de R$ 100.00" << endl;
    cout << quantNota50 << " nota(s) de R$ 50.00" << endl;
    cout << quantNota20 << " nota(s) de R$ 20.00" << endl;
    cout << quantNota10 << " nota(s) de R$ 10.00" << endl;
    cout << quantNota5 << " nota(s) de R$ 5.00" << endl;
    cout << quantNota2 << " nota(s) de R$ 2.00" << endl;

    cout << "MOEDAS:" << endl;
    cout << quantMoeda100 << " moeda(s) de R$ 1.00" << endl;
    cout << quantMoeda050 << " moeda(s) de R$ 0.50" << endl;
    cout << quantMoeda025 << " moeda(s) de R$ 0.25" << endl;
    cout << quantMoeda010 << " moeda(s) de R$ 0.10" << endl;
    cout << quantMoeda005 << " moeda(s) de R$ 0.05" << endl;
    cout << quantMoeda001 << " moeda(s) de R$ 0.01" << endl;
    


    return 0;
}
