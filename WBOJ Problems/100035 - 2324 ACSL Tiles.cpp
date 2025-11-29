#include <bits/stdc++.h> 

using namespace std;

vector<int> inputProcessing(){
    string line;
    // 선행 공백(개행 포함)을 건너뛰고 한 줄을 읽음
    if (!getline(cin >> ws, line)) return {};
    istringstream ss(line);
    vector<int> inputs;
    int val;
    while (ss >> val) inputs.push_back(val);
    return inputs;
}

// 타일 방향 바꾸기
int reverse(int n){
    return ((n % 10) * 10 + (n / 10));
}

void putTilesFromHands(){
    for (int i = 0; i < hands.size(); i++){
        for (int j = 0; j < 4; j++){
            if (hands[i] / 10 == numbers[j][numbers[j].size() - 1]){
                numbers[j].push_back(hands[i]);
                hands[i] = 0;
                putTilesFromHands();
            }
            else if (reverse(hands[i]) / 10 == numbers[j][numbers[j].size() - 1] && hands[i] != reverse(hands[i])){
                numbers[j].push_back(reverse(hands[i]));
                hands[i] = 0;
                putTilesFromHands();
            }
        }
    }
    putTilesFromPiles();
}

void putTilesFromPiles(){
    for (int i = 0; i < piles.size(); i++){
        for (int j = 0; j < 4; j++){
            if (piles[i] / 10 == numbers[j][numbers[j].size() - 1]){
                numbers[j].push_back(piles[i]);
                piles[i] = 0;
                putTilesFromPiles();
            }
            else if (reverse(piles[i]) / 10 == numbers[j][numbers[j].size() - 1] && piles[i] != reverse(piles[i])){
                numbers[j].push_back(reverse(piles[i]));
                piles[i] = 0;
                putTilesFromPiles();
            }
        }
    }
    putTilesFromHands();
}

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int initialNumbers;
    cin >> initialNumbers;

    // 백터 생성
    vector<vector<int>> numbers;
    numbers.push_back(vector<int>());
    numbers.push_back(vector<int>());
    numbers.push_back(vector<int>());
    numbers.push_back(vector<int>());

    // 초기 값 설정
    for (int i = 0; i < 4; i ++){
        numbers[3 - i].push_back(initialNumbers % 10);
        initialNumbers /= 10;
    }

    // Hand 입력 받기
    vector<int> hands = inputProcessing();

    // Pile 입력 받기
    vector<int> piles = inputProcessing();

    // Numbers 값 확인
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < numbers[i].size(); j++){
            cout << numbers[i][j] << " ";
        }
        cout << "\n";
    }
}