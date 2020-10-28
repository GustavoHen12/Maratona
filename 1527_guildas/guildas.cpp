//https://www.urionlinejudge.com.br/judge/pt/problems/view/1527

#include <iostream>
#include <set>

using namespace std; 
int findGuilda(int player, set<int> guildas[], int tam){
    for(int i = 0; i < tam; i++){
        for (std::set<int>::iterator it=guildas[i].begin(); it!=guildas[i].end(); ++it)
            if(*it == player)
                return i;
    }    
    return -1;
}

int main() {
    int tam, rounds;
    cin >> tam >> rounds;

    set<int> guildas[tam];
    for(int i = 1; i <= tam; i++){
        guildas[i-1].insert(i); 
    }

    int playerLevel[tam];
    for(int i = 0; i < tam; i++){
        cout << playerLevel[i]; 
    }

    int tp, a, b;
    for(int i = 0; i < rounds; i++){
        cin >> tp >> a >> b;
        if(tp == 1){
            int guildaA = findGuilda(a, guildas, tam);
            int guildaB = findGuilda(b, guildas, tam);
        }
    }


    for(int i = 0; i < tam; i++){
        for (std::set<int>::iterator it=guildas[i].begin(); it!=guildas[i].end(); ++it)
            std::cout << ' ' << *it;
        std::cout << '\n';
    }
    return 0;
}
