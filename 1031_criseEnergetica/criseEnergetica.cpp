//https://www.urionlinejudge.com.br/judge/pt/problems/view/1031

#include <iostream>
#include<bits/stdc++.h>

using namespace std;


int josephus(int n, int k) {
    int result;
    if(n == 1)
        result = 1;
    else
        result = (josephus(n-1, k) + k-1) % n+1;
    //cout << result << " - " << n << "\n";
    return result;
}
 
int main() {
 
    //cout << josephus(17, 5);
    int n, k, res;
    while(1){
        cin >> n;
        if(n == 0)
            break;
        k = 1;
        while(1){
            res = josephus(n-1, k);
            if(res == 12)
                break;
            else 
                k++;
        }
        cout << k << "\n";
    }
    return 0;
}

