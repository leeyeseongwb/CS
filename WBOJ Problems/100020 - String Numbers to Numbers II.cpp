#include <bits/stdc++.h> 

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cout << string(n - 1 - i, ' ') << string(1 + 2 * i, '*') << "\n";
    }

    for (int i = n - 2; i >= 0; --i) {
        cout << string(n - 1 - i, ' ') << string(1 + 2 * i, '*') << "\n";
    }

    return 0;
}