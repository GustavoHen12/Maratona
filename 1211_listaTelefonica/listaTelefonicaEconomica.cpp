//https://www.urionlinejudge.com.br/judge/pt/problems/view/1211

#include <iostream>
#include <stdio.h>

using namespace std;
int verificaRepetidos(string strA, string strB){
    if(strB.compare("--") == 0)
        return 0;
    int rept;
    int i = 0;
    while(strA[i] == strB[i] and i < strA.length())
        i++;
    return i;
}
int main() {
 
    int quant, quantRep = 0;
    string num, numAnt;
    while (1)
    {
        num = "--";
        if(scanf("%d", &quant) == EOF)
            break;
        for(int i = 0; i < quant; i++){
            numAnt = num;
            cin >> num;
            //cout << num << " | " << numAnt << " | " << quantRep << "\n";
            quantRep += verificaRepetidos(num, numAnt);
        }
        cout << quantRep << "\n";
    }
    return 0;
}

