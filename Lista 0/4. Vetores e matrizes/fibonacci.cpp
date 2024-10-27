#include <iostream>

using namespace std;

long long* calculaFibonacci(int numero) {
    long long * sequenciaFibonacci = new long long [numero];
    sequenciaFibonacci[0] = 0; // fib(0)
    sequenciaFibonacci[1] = 1; // fib(1) | fib(2) = 1 | fib(3) = 2  | fib(4) = 3 | fib(5) = 5

    for (int i = 2; i < numero+1; i++){
        sequenciaFibonacci[i] = sequenciaFibonacci[i-1] + sequenciaFibonacci[i-2];
    }

    return sequenciaFibonacci;
}

int main() {

    ios::sync_with_stdio(false);

    int quantTestes;
    cin >> quantTestes;
    int * testes = new int [quantTestes];

    for (int i = 0; i < quantTestes; i++){
        cin >> testes[i];
    }

    int maiorNumero = 0;
    for (int i = 0; i < quantTestes; i++){
        if (testes[i] > maiorNumero) {
            maiorNumero = testes[i];
        }
    }

    long long* vetorSolucao = calculaFibonacci(maiorNumero);
    
    for (int i = 0; i < quantTestes; i++){
        cout << "Fib(" << testes[i] << ") = " << vetorSolucao[testes[i]] << endl;
    }

    return 0;
}


// Solução ineficiente
// #include <iostream>

// using namespace std;

// int n2;

// int fibonacci(int numero) {

//     int f;

//     if(numero == 0){
//         return 0;
//     } else if (numero == 1){
//         return 1;
//     } else {
//         int aux = fibonacci(numero-2);
//         f = aux + fibonacci(numero-1);
//     } 

//     return f;
// }

// int main() {

//     ios::sync_with_stdio(false);

//     int quantTestes;
//     cin >> quantTestes;

//     int testes[quantTestes];

//     for (int i = 0; i < quantTestes; i++){
//         cin >> testes[i];
//     }
//     for (int i = 0; i < quantTestes; i++){
//         cout << "Fib(" << testes[i] << ") = " << fibonacci(testes[i]) << endl;
//     }

//     return 0;
// }


// Criar vetor onde v[0] = 0, e v[1] = 1
// Criar função para que some os dois últimos vetores já calculados e salve no final da fila