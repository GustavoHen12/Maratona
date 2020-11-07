//https://www.urionlinejudge.com.br/judge/pt/problems/view/2880
#include<stdio.h>
#include<string>
#include <iostream>

using namespace std; 
int posicaoValida(string msg, string crib, int ini){
    int i = ini, j = 0, valido = 1;
    while(j < crib.size()){
        if(msg[i] == crib[j]){
            valido = 0;
            break;
        }
        i++;
        j++;
    }
    return valido;
}
int main(){
    string msg, crib;
    cin >> msg >> crib;

    int limite = msg.size() - crib.size(), total = 0;
    for(int i = 0; i <= limite; i++){
        if(posicaoValida(msg, crib, i))
            total++;
    }
    cout << total << endl;
    return 0;
}