//https://www.urionlinejudge.com.br/judge/pt/problems/view/1020


#include <iostream>

using namespace std;

int main() {
 
    int num, ano, dia, mes;

    cin >> num;
    ano = num / 365;
    num = num % 365;
    mes = num / 30;
    dia = num%30;

    cout << ano << " ano(s)\n";
    cout << mes << " mes(es)\n";
    cout << dia << " dia(s)\n";
    return 0;
}

