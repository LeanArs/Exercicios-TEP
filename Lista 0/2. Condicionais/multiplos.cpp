#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main (){

    ios::sync_with_stdio(false);

    int A, B;
    cin >> A >> B;

    if(A>B){
        swap(B, A);
    }

    if(B % A == 0){
        cout << "Sao Multiplos\n" << endl;
    } else {
        cout << "Nao sao Multiplos\n" << endl;
    }

    return 0;
}