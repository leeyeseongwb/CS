#include <bits/stdc++.h> 

using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    vector<string> line = {};

    int maxLength = 0;
    for (int i = 0; i < 5; i++) {
        string lineIn;
        cin >> lineIn;

        if (lineIn.length() > maxLength) maxLength = lineIn.length();

        line.push_back(lineIn);
    }

    for (int i = 0; i < maxLength; i++) {
        for (int j = 0; j < 5; j++) {
            if (i < line[j].length()) cout << line[j][i];
            else continue;
        }
    }
}