// 만점은 아님, 수정 필요

#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, M;
    cin >> n >> M;

    // 입력, 분류 저장
    vector<ll> cowHeights(n);
    for(int i = 0; i < n; i++){
        cin >> cowHeights[i];
    }

    vector<ll> candyHeights(M);
    for(int i = 0; i < M; i++){
        cin >> candyHeights[i];
    }

    for (int caneN = 0; caneN < M; caneN++){
        ll candyBottom = 0;
        ll candyTop = candyHeights[caneN];
        for (int cowN = 0; cowN < n; cowN++){
            if (cowHeights[cowN] > candyBottom){
                ll eaten = min((ll)cowHeights[cowN], candyTop) - candyBottom;
                cowHeights[cowN] += eaten;
                candyBottom += eaten;
            }
        }
    }

    for (ll cowHeight : cowHeights){
        cout << cowHeight << "\n";
    }
}