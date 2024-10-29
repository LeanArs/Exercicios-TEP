#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(0); \
              cin.tie(0); \
              cout.tie(0)

class Jogador {
public:
    string nome;
    string escolha;
};

int main() {
    fastio;
  
    int QT;
    cin >> QT;

    for (int i = 0; i < QT; i++) {
        Jogador player1, player2;
        cin >> player1.nome >> player1.escolha >> player2.nome >> player2.escolha;

        int N1, N2;
        cin >> N1 >> N2;

        if((N1 + N2) % 2 == 0){
            // Par
            if(player1.escolha == "PAR"){
                cout << player1.nome << endl;
            } else {
                cout << player2.nome << endl;
            }

        } else {
            // Ímpar
            if(player1.escolha == "IMPAR"){
                cout << player1.nome << endl;
            } else {
                cout << player2.nome << endl;
            }
        }
    }
    
    return 0;
}
