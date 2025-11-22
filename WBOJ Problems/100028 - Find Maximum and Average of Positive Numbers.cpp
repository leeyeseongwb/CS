#include <bits/stdc++.h> 

using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int max = -1;
    int sum = 0;
    int cnt = 0;

    while (true) {
        int in;
        cin >> in;

        if (in < 0) break;
        if (in > max) max = in;
        sum += in;
        cnt++;
    }

    cout << max << " " <<  sum / cnt;
}