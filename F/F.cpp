#include <stdio.h>
#include <string>
#include <iostream>

using namespace std; 

int verifica(int pontosL, int pontosR){
    int sub = pontosL-pontosR;

    if(pontosL >= 10)
        return 0;
    if(pontosR >= 10)
        return 1;
    if(sub >= 2){
        if(pontosL >= 5){
            return 0;
        }
    }
    if(sub <= -2){
        if(pontosR >= 5){
            return 1;
        }
    }

    return -1;
}

void exibePlacar(int pontosL, int pontosR, char possPonto, int gamesL, int gamesR){
    //cout << possPonto << endl;
    if(gamesL >= 2){
        cout << gamesL <<" (winner) - " << gamesR << endl;
        return;
    }
    if(gamesR >= 2){
        cout << gamesL <<" - " << gamesR << " (winner)"<< endl;
        return;
    }
    cout << gamesL << " (" << pontosL;
    if(possPonto == 'E'){
        cout <<"*";
    }
    cout <<") - " << gamesR << " (" << pontosR;
    if(possPonto == 'D'){
        cout <<"*";
    }
    cout << ")\n";

}

int main(){
    int gamesTotal = 0, pontosL = 0, pontosR = 0, gamesL = 0, gamesR = 0;
    string jogadas;
    cin >> jogadas;
    int i = 0;
    char possPonto = 'E';
    //0 = E, 1 = D
    while (i < jogadas.size())
    {
        char jogada = jogadas[i];
        if(jogada == 'R'){
    //        cout << 'R';
            gamesTotal++;
            if(possPonto == 'E'){
                pontosR++;
                possPonto = 'D';
            }else{
                pontosL++;
                possPonto = 'E';
            }
//            cout<< pontosL << " - " << pontosR << endl;

        }
        else{
            if(jogada == 'S'){
                gamesTotal++;
  //              cout << 'S';
                
                if(possPonto == 'E'){
                    pontosL++;
                }else{
                    pontosR++;
                }
    //            cout<< pontosL << " - " << pontosR << endl;

            }
            else
            {
      //          cout << 'Q';
        //        cout<< pontosL << " - " << pontosR << endl << possPonto;
                exibePlacar(pontosL, pontosR, possPonto, gamesL, gamesR);
                //exibe placar
            }
        }
        int result = verifica(pontosL, pontosR);
        if(result == 0){
            //fim game esquerda
            pontosL = 0;
            pontosR = 0;
            gamesL++;
        }else{
            if(result == 1){
                //fim game direita
                pontosL = 0;
                pontosR = 0;
                gamesR++;
            }
        }
        i++;
    }
    
    return 0;
}