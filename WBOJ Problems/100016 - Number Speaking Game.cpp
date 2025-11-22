#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int playerNumber, numberOfNumbers, targetNum;
    cin >> playerNumber >> numberOfNumbers >> targetNum;

    vector<vector<int>> arr(playerNumber, vector<int>(numberOfNumbers));
    vector<int> reaminPlayerScore(playerNumber, 0);
    vector<int> playerLeaderboard(playerNumber, 0);

    for (int i = 0; i < playerNumber; i++) {
        for (int j = 0; j < numberOfNumbers; j++) {
            cin >> arr[i][j];
        }
    }

    int currentNum = 0;
    while (true){
        for (int j = 0; j < numberOfNumbers; j ++) {
            for (int i = 0; i < playerNumber; i ++) {
                currentNum += arr[i][j];
                arr[i][j] = 0;
                if (currentNum > targetNum){

                    reaminPlayerScore.assign(playerNumber, 0);

                    // 승자를 제외한 다른 선수들의 남은 합을 (합, 선수번호) 형태로 수집
                    vector<pair<int,int>> others;
                    for (int k = 0; k < playerNumber; k++) {
                        if (k == i) continue; // 승자 pass
                        int sum = 0;
                        for (int n = 0; n < numberOfNumbers; n++) sum += arr[k][n]; // 아직 말하지 않은(남아있는) 모든 숫자의 합을 계산
                        others.emplace_back(sum, k + 1); // 출력은 1-based 인덱스
                    }

                    // 남은 합이 작은 순서대로 정렬, 동률이면 선수 번호 작은 순서
                    sort(others.begin(), others.end(), [](const pair<int,int>& a, const pair<int,int>& b){
                        if (a.first != b.first) return a.first < b.first;
                        return a.second < b.second;
                    });

                    cout << (i + 1);
                    for (auto &pr : others) cout << " " << pr.second;

                    cout << "\n";
                    return 0;
                }
            }
        }
    }
}