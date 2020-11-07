#include<stdio.h>
#include <iostream>

using namespace std; 

int main(){
    int total, n;
    cin >> n;
    
    int fat[n];
    int nfat = 1, i = 1;
    while(1){
        nfat = i * nfat;
        if(nfat > n)
            break;
        fat[i] = nfat;
        cout << nfat << endl;
        i++;
    }

    cout << total << endl;
    return 0;
}