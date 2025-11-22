#include <bits/stdc++.h> 

using namespace std;

int main (){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    string num;
    cin >> num;

    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += (int)(num[i] - '0');
    }

    cout << sum << "\n";
    return 0;
    
}