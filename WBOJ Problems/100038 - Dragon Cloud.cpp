#include <bits/stdc++.h> 

using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i ++) cout << "dragon";
    for (int i = 0; i < k - n; i ++) cout << "cloud";
}