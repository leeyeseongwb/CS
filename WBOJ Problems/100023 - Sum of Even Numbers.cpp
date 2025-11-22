#include <bits/stdc++.h> 

using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    int sum = 0;
    for (int i = 1; i < n + 1; i++){
        if (i % 2 == 0) sum += i;
    } 

    cout << sum << "\n";
}