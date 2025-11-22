#include <bits/stdc++.h> 

using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    string sin;
    cin >> sin;
    
    string result = "";

    for (char i : sin) {
        if (i == 'a' ||i == 'e' ||i == 'i' ||i == 'o' ||i == 'u') continue;
        result += i;
    }

    cout << result;
    
}