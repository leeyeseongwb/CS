#include <bits/stdc++.h> 

using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    string player;
    cin >> player;

    int hp_player;
    cin >> hp_player;

    int st_player;
    cin >> st_player;

    string enemy;
    cin >> enemy;

    int hp_enemy;
    cin >> hp_enemy;

    int st_enemy;
    cin >> st_enemy;

    int numTry = 0;
    while (true) {

        if (hp_player <= 0){
            cout << "Lose";
            break;
        }

        if (hp_enemy <= 0){
            cout << "Win";
            break;
        }

        if (numTry % 2 == 0) hp_enemy -= st_player;
        else hp_player -= st_enemy;

        numTry++;
    }


}