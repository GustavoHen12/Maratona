//https://www.urionlinejudge.com.br/judge/pt/problems/view/1093
//https://pt.wikipedia.org/wiki/Ru%C3%ADna_do_jogador

#include <iostream>
#include <cmath> 

using namespace std; 

int main() {
    int ev1, ev2, at, d;
    double prob = 0.0;
    cout.precision(3);
    while (1)
    {
        cin >> ev1 >> ev2 >> at >> d;
        if(ev1 == 0 && ev2 == 0 && at == 0 && d == 0)
            break;
        int n1 = ceil(static_cast<double>(ev1)/d);
        int n2 = ceil(static_cast<double>(ev2)/d);
        if(at == 3){
            prob = static_cast<double>(n1)/(n1+n2);
        }
        else{
            double p;
            p = 1.0 - (6-at)/6.0; 
            p = (1 - p)/p;
            double num = 1.0 - pow(p, n1);
            double den = 1.0 - pow(p, n1+n2);
            prob = num/den;
        }
        printf("%.1f\n",prob*100);
    }   
    return 0;
}