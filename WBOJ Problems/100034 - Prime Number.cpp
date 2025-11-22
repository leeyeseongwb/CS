#include <bits/stdc++.h> 

using namespace std;

string prime(int a){
    if (a != 2 && a % 2 == 0 || a == 1) {
        return "false";
    }
    for (int i = 3; i <= sqrt(a) + 1; i += 2) {
        if (a % i == 0) {
            return "false";
        }
    }
    return "true";
}

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    cout << prime(n);
}