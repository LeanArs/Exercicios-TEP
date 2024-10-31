#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(0); \
              cin.tie(0); \
              cout.tie(0)

int testarPrimalidade(int numero){
    
    int quantDivisoes = 0;

    for (int i = 1; i < numero+1; i++) {
        if((numero % i) == 0) {
            quantDivisoes++;
        }
    }
    
    if(quantDivisoes > 2){
        return 0;
    } else{
        return 1;
    }
}

int main() {
   fastio;
  
  int n, numero;
  cin >> n;

  for (int i = 0; i < n; i++){
    cin >> numero;
    if (testarPrimalidade(numero)){
        cout << numero << " eh primo" << endl;
    } else {
        cout << numero << " nao eh primo" << endl;    
    } 
  }

   return 0;
}
