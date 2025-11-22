#include <bits/stdc++.h> 

using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    string fi;
    cin >> fi;

    string si;
    cin >> si;

    int s = 0;
    int b = 0;
    int o = 0;

    for (int i = 0; i < 3; i ++){
        if (fi[i] == si[i]) {
            s++;
        }
        else {
            if (count (fi.begin(), fi.end(), si[i]) != 0) b++;
            else o++;
        }
    }

    cout << s << "s " << b << "b " << o << "o";
}