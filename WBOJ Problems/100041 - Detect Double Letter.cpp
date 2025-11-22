#include <bits/stdc++.h> 

using namespace std;

string checker(string str) {
    for (int i = 0; i < str.length() - 1; i++) {
        if (str[i] == str[i + 1]) return "true";
    }
    return "false";
}

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    string str;
    cin >> str;
    cout << checker(str);
    
}