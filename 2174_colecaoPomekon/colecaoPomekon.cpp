//https://www.urionlinejudge.com.br/judge/pt/problems/view/2174
#include <iostream>
#include<string> 

using namespace std;
 
int main() {
    int tam;
    cin >> tam;

    string vet[tam];
    string pokemon = "";
    int sz = 0;
    for(int i = 0; i < tam; i++){
        cin >> pokemon;
        int j = sz-1;
        while(j >= 0){
            if(pokemon.compare(vet[j]) == 0){
                break;
            }
            j--;
        }
        if(j < 0){
            vet[sz] = pokemon;
            sz++;
        }
    }
    cout << "Falta(m) "<< 151 - sz <<" pomekon(s).\n";
    return 0;
}