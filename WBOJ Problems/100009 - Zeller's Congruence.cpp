#include <bits/stdc++.h> 

using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int y,m,q;
    cin >> y;
    cin >> m;
    cin >> q;

    if (m == 1 || m == 2){
        if (m == 1){
            m = 13;
        } else {
            m = 14;
        }
        y -= 1;
    }

    int k = y % 100;
    int j = y / 100;

    int h = (q + (13*(m + 1))/5 + k + (k/4) + (j/4) + (5*j)) % 7;
    cout << h << "\n";
}