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

    int input;
    cin >> input;

    long long* vetorSolucao = calculaFibonacci(input);
    
    for (int i = 0; i < input; i++){
        cout << vetorSolucao[i];
        if (i+1 < input) {
            cout << " ";
        }   
    }
    cout << endl;
    
    return 0;
}