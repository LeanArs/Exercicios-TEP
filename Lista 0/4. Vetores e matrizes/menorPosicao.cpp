#include <iostream>

using namespace std;

int main() {

    ios::sync_with_stdio(false);

    int tamanhoVetor, contador;
    cin >> tamanhoVetor;
    int vetor[tamanhoVetor];

    for (contador = 0; contador < tamanhoVetor; contador++) {
        cin >> vetor[contador];
    }

    int menorValor = vetor[0];
    int posicao = 0;

    for (contador = 0; contador < tamanhoVetor; contador++) {
        if(vetor[contador] < menorValor){
            menorValor = vetor[contador];
            posicao = contador;
        }
    }

    cout << "Menor valor: " << menorValor << endl;
    cout << "Posicao: " << posicao << endl;

    return 0;
}