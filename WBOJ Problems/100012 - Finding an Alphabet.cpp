#include <bits/stdc++.h> 

using namespace std;

int main (){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    string word; 
    cin >> word;

    vector<int> alphabet(26, -1);

    for (char letter : "abcdefghijklmnopqrstuvwxyz"){
        if (word.find(letter) != string::npos){
            alphabet[letter - 'a'] = word.find(letter);
        }
    }

    for (int i = 0; i < 26; i++){
        cout << alphabet[i] << " ";
    }

    return 0;
    
}