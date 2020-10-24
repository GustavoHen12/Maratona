//https://www.urionlinejudge.com.br/judge/pt/problems/view/1212

#include <iostream> 
using namespace std;
 
int main() {
 
    long numA, numB;
    cin >> numA;
    cin >> numB;
    int digA, digB;
    int proxCarry = 0, carry;
    while((numA!=0) && (numB != 0)){
        carry = 0;
        proxCarry = 0;
        while(1){
            digA = numA % 10;
            digB = numB % 10;
            numA = numA / 10;
            numB = numB / 10;
            if(digA + digB + proxCarry >= 10){
                carry++;
                proxCarry = 1;
            }
            else{
                proxCarry = 0;
            }
            if(numA==0 && numB==0)break;
        }

        if(carry == 0) printf("No carry operation.\n");
        else if(carry==1)printf("1 carry operation.\n");
        else printf("%d carry operations.\n", carry);
        cin >> numA;
        cin >> numB;
    }
    return 0;
}