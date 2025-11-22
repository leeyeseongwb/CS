#include <bits/stdc++.h> 

using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0){
            sum += i;
        }
    }
    
    cout << sum << "\n";
}