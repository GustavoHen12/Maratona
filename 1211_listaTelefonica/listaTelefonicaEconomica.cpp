//https://www.urionlinejudge.com.br/judge/pt/problems/view/1211

#include <iostream>
#include <stdio.h>
#include <algorithm>

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
    string num, numAnt, allNum[20000];
    while (scanf("%d%*c", &quant) != EOF)
    {
        for(int i = 0; i < quant; i++)
            cin >> allNum[i];
        sort(allNum,allNum+quant); 
        num = "--";
        quantRep = 0;
        for(int i = 0; i < quant; i++){
            numAnt = num;
            num = allNum[i];
            quantRep += verificaRepetidos(num, numAnt);
        }
        cout << quantRep << "\n";
    }
    return 0;
}

